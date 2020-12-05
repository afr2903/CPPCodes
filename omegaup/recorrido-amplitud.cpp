#include<iostream>
using namespace std;
#define MAX 100
bool graph[MAX][MAX];
bool visited[MAX];
int v,a,n,x,y;
int main(){
    cin>>v>>a>>n;
    while(a--){
        cin>>x>>y;

    }
    while(n--){
        cin>>x;
        rp(x);
        clean();
        cout<<"\n";
    }
}
/*
9 10 1
1 2
1 9
2 3
2 4
3 4
4 8
8 7
5 7
5 6
3 5
1
*/
