// C - Competencia de Olimpicos
//  Copyright © 2019 Diego Garcia Rodriguez del Campo. All rights reserved
#include<bits/stdc++.h>
#define MAX 500005
#define optimiza_io cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;
typedef long long i64;

struct nodo
{
    int x, y, z;
};

int N, idx, ans;
nodo a[MAX];
unordered_map < int , int > mp;
bool cmpx( nodo a , nodo b ) { return a.x > b.x; }
int tree[4*MAX];
set < int > s;

int qry( int x , int l , int r , int lq , int rq )
{
    if( l > rq or r < lq )
        return 0;
    if( l >= lq && r <= rq )
        return tree[x];
    int mid = ( l + r ) / 2;
    return max( qry( 2*x+1 , l , mid , lq , rq ) , qry( 2*x+2 , mid+1 , r , lq , rq ) );
}

void upd( int x , int l , int r , int q , int v )
{
    if( l > q or r < q )
        return;
    if( l == r )
    {
        tree[x] = max( tree[x] , v );
        return;
    }
    
    int mid = ( l + r ) / 2;
    upd( 2*x+1 , l , mid , q , v );
    upd( 2*x+2 , mid+1 , r , q , v );
    tree[x] = max( tree[2*x+1] , tree[2*x+2] );
}


int main()
{
    optimiza_io
    cin >> N; 
    for( int i = 1; i <= N; i ++ )
        cin >> a[i].x;
        
    for( int i = 1; i <= N; i ++ )
    {
        cin >> a[i].y;
        s.insert( a[i].y );
    }
    for( int i = 1; i <= N; i ++ )
        cin >> a[i].z;

    for( auto v : s )
        mp[v] = ++idx;
    idx++;
        
    sort( a + 1 , a + N + 1 , cmpx );
    int l = 1;
    while( l <= N )
    {
        int r = l;
        while( r + 1 <= N && a[r + 1].x == a[l].x )
            r++;
            
        for( int i = l; i <= r; i ++ )
        {
            a[i].y = mp[a[i].y];
            if( qry( 0 , 1 , idx , a[i].y + 1 , idx ) > a[i].z )
                ans++;
        }
        for( int i = l; i <= r; i ++ )
            upd( 0 , 1 , idx , a[i].y , a[i].z );
        l = r + 1;
    }
    cout << ans;
    return 0;
}