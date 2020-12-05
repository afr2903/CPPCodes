#include <iostream>
#define MAX 302
using namespace std;

int city[MAX], dist[MAX][MAX];
int n, p;
int DP[MAX][32], d[MAX][32], vis[MAX][32];


void distances(){

    for( int i = 2; i <= n; i++ )
        dist[0][i] = dist[0][i-1] + (i-1) * (city[i]-city[i-1]);
    for( int i = n - 1; i; i-- )
        dist[i][n + 1] = dist[i + 1][n + 1] + ( n - i ) * ( city[i + 1] - city[i] );

    for( int i = 1; i <= n; i++ )
        for( int j = i + 1; j <= n; j++ )
            for( int k = i + 1; k < j; k++ )
                dist[i][j] += min( city[k] - city[i], city[j] - city[k] );

}

int f( int i, int j ){

    if(j>p)
        return dist[i][n+1];

    if(i>n)
        return 99999999;

    if(!vis[i][j]){
        vis[i][j] = 1;
        DP[i][j] = 99999999;
        for( int k = i + 1; k <= n + 1; k++ ){
            int aux = f( k, j + 1 ) + dist[i][k];
            if( aux < DP[i][j] ){
                DP[i][j] = aux;
                d[i][j] = k;
            }
        }
    }
    return DP[i][j];

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>p;
    for(int i=1; i<=n; i++) cin>>city[i];
    distances();
    int menor = 99999999, inicio = 0;
    for( int i = 1; i <= n; i++ ){
        int aux = f( i, 2 ) + dist[0][i];
        if( aux < menor ){
            menor = aux;
            inicio = i;
        }
    }
    cout << menor << "\n";
    int i = inicio, j = 2;
    for( ; p; p-- ){
        cout << city[i];
        if( p > 1 )
            cout << " ";
        else
            cout << "\n";
        i = d[i][j];
        j++;
    }

}
