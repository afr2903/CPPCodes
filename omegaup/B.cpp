// B - Recortes en la OMI
//  Copyright © 2019 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
#define MAX 1000005
#define LOG 19
#define optimiza_io cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;
typedef long long i64;

int N, K;
bool vis[MAX];
int papa[MAX][LOG + 1];
int niv[MAX];
vector < int > ady[MAX];

void add( int x )
{
    while( ! vis[x] )
    {
        vis[x] = 1;
        K--;
        x = papa[x][0];
    }
}

int willNeed( int x )
{
    int ini = x;
    for( int i = LOG; i >= 0; i -- )
        if( ! vis[papa[x][i]] )
            x = papa[x][i];
    return niv[ini] - niv[x] + 1;
}

void initLCA( )
{
    for( int j = 1; j <= LOG; j ++ )
        for( int i = 1; i <= N; i ++ )
            papa[i][j] = papa[ papa[i][j - 1] ][j - 1];
}

void dfs( int x , int p , int n )
{
    niv[x] = n;
    papa[x][0] = p;
    for( auto v : ady[x] )
        if( v != p )
            dfs( v , x , n + 1 );
}
int main()
{
    optimiza_io
    
    cin >> N >> K;
    K = N - K - 1;
    vis[N] = vis[0] = 1;
    for( int i = 1; i < N; i ++ )
    {
        int u, v;
        cin >> u >> v;
        ady[u].push_back( v );
        ady[v].push_back( u );
    }
    
    dfs( N , 0 , 1 );
    initLCA( );
    for( int i = N-1; i >= 1; i -- )
        if( ! vis[i] && willNeed( i ) <= K )
            add( i );
        
    vector < int > ans;
    for( int i = 1; i <= N; i ++ )
        if( ! vis[i] )
            cout << i << " ";
    cout << "\n";
    return 0;
}

