//  Copyright © 2019 Diego Garcia Rodriguez del Campo. All rights reserved.
// A - Edificios Y Fotos
//  Copyright © 2019 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
#define MAX 1000005
#define INF 1e9
#define optimiza_io cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;
typedef long long i64;

int N, L, R;
int a[MAX];
bool dp[MAX];
int dpant[MAX];
int unoant[MAX];

bool ok( int x )
{
    dp[0] = 1;
    dpant[0] = 0;
    unoant[0] = -INF;
    for( int i = 1; i <= N; i ++ )
    {
        dp[i] = 0;
        unoant[i] = unoant[i - 1];
        dpant[i] = dpant[i - 1];
        if( a[i] >= x )
            unoant[i] = i;
        int r = min( i - L + 1 , unoant[i] );
        int l = i - R + 1;
        if( l > r or r < 1 )
            continue;
        if( dpant[r - 1] >= l - 1 )
            dp[i] = 1;
        if( dp[i] )
            dpant[i] = i;
    }
    return dp[N];
}

int bin( )
{
    int low = 1;
    int high = INF;
    while( low < high )
    {
        int mid = ( low + high + 1 ) / 2;
        if( ok( mid ) )
            low = mid;
        else
            high = mid - 1;
    }
    if( ! ok( low ) ) 
        return -1;
    return low;
}

int main()
{
    optimiza_io
    cin >> N >> L >> R;
    for( int i = 1; i <= N; i ++ )
        cin >> a[i];
    
    cout << bin() << "\n";
    return 0;
}

