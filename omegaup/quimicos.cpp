#include <algorithm>
#include <cstdio>
#include <cstring>
#include<iostream>

using namespace std;

// Número de parejas de tubos de vidrio.
int N;

// La cantidad de cada sustancia.
int sustancias[64];

// La cantidad de rondas que vamos a intentar buscar una
// solución. Entre más grande, mejor, pero va a tardar más.
int rondas;

bool visitado[64];

// Regresa verdadero si |x| está entre |minimo| y |maximo|.
inline bool dentro_de(int x, const int minimo, const int maximo) {
	return minimo <= x && x <= maximo;
}

// Regresa verdadero si se puede realizar un apareamiento entre las sustancias
// de tal manera que al final todos los tubos de precipitado resultantes
// contengan entre |minimo| y |maximo| ml de sustancia. Un apareamiento normal
// no funciona en este caso, porque no es un grafo bipartito, así que usaremos
// un algoritmo de fuerza bruta que intenta todos los apareamientos posibles.
// Esto puede ser muy tardado (hay aproximadamente O(n!), así que solo se harán
// |rondas| intentos antes de rendirse y regresar que no es posible.
bool valido(int i, int minimo, int maximo) {
	if (i == 2*N) {
		return true;
	} else if (--rondas <= 0) {
		// Ya intentamos todo lo posible y aún no encontramos una
		// solución. Rindámonos.
		return false;
	} else if (visitado[i]) {
		// Ese tubo ya está apareado con algún otro. Intentemos el siguiente.
		return valido(i + 1, minimo, maximo);
	}

	visitado[i] = true;
	// Intenta aparear el tubo actual con todos los demás tubos libres tal que su
	// suma (o diferencia absoluta) esté entre |minimo| y |maximo|.
	for (int j = i + 1; j < 2*N; j++) {
		if (visitado[j]) continue;
		if (dentro_de(sustancias[i] + sustancias[j], minimo, maximo) ||
				dentro_de(abs(sustancias[i] - sustancias[j]), minimo, maximo)) {
			visitado[j] = true;
			if (valido(i + 1, minimo, maximo)) return true;
			visitado[j] = false;
		}
	}
	visitado[i] = false;
	return false;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin>>N;

	for (int i = 0; i < 2 * N; i++) cin>>sustancias[i];

	sort(sustancias, sustancias + 2 * N);

	int minimo = 0;
	int maximo = sustancias[2 * N - 2] + sustancias[2 * N - 1];

	// Hacemos búsqueda binaria sobre el ancho del intervalo en el cual puede
	// estar la solución. Para cada ancho, vamos a tratar de ver si es posible
	// hacer un apareamiento entre tubos de vidrio de tal manera que después de
	// combinar los tubos de cada pareja, todos terminen con entre |base| y
	// |base| + |ancho| ml de solución.
	int a = 0, b = maximo;
	while (a < b) {
		int ancho = (a + b) / 2;
		bool posible = false;
		// Para un |ancho| dado, vamos a intentar con todos los valores posibles que
		// estén entre |minimo| y |maximo|.
		for (int base = minimo; base <= maximo - ancho; base++) {
			memset(visitado, 0, sizeof(visitado));
			// 10,000 intentos basta para un 80% de la solución. Usando un poco de
			// matemáticas, puedes encontrar el número de rondas que necesitas para
			// que te de 100%, pero va a tardar hasta un par de horas.
			rondas = 10000;
			if (valido(0, base, base + ancho)) {
				// Unas heurísticas que ayudan a probar los menos casos posibles.
				minimo = max(minimo, base - 11 * ancho);
				maximo = min(maximo, base + 11 * ancho);
				posible = true;
				break;
			}
		}
		if (posible) {
			b = ancho;
		} else {
			a = ancho + 1;
		}
	}

	cout<<"\n"<<b;
}
