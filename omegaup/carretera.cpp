#include<iostream>
#include<stdio.h>
#include<algorithm>

#define INF 1e9
#define ITER 100
#define DIFF 1e-9

using namespace std;
int n;

struct vehicle{
	double pos;
	double speed;
} vs[100002];

double calc(double t){
	double Min = INF;
	double Max = -INF;
	for(int i = 0; i < n; i++){
		double npos = vs[i].pos + vs[i].speed * t;
		Min = min(npos, Min), Max = max(npos, Max);
	}
	return Max - Min;
}

bool checa(double t){
	return calc(t + DIFF) - calc(t) > 0;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	scanf("%d", &n);

	for(int i = 0; i < n; i++)
		scanf("%lf%lf", &vs[i].pos, &vs[i].speed);

	double left = 0;
	double right = 1000000;
	for(int i = 0; i < ITER; i++){
		double mid = (left + right) / 2.0;
		if(checa(mid))
			right = mid;
		else left = mid;
	}

	printf("%.10lf\n", calc(left));
}
