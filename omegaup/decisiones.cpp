#include<iostream>
#include<vector>
#define MAX 2000
using namespace std;
int n,m, a,b, ml,learning,last;
int s[MAX];
bool seen[MAX];
vector<int>life[MAX];
void live(){
    int x=0;
    while(true){
        seen[x]=1;
        ml=n;
        cout<<x<<"\n";
        for(int i=0; i<life[x].size(); i++){
            if(seen[life[x][i]])continue;
            if(s[life[x][i]]>s[ml]) ml=life[x][i];
        }
        if(ml==n){ last=x; return; }
        learning+=s[ml];
        if(x!=ml)x=ml;
        else{ last=x; return; }
    }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=0; i<n; i++) cin>>s[i];
    s[n]=0;
    for(int i=0; i<m; i++){
        cin>>a>>b;
        life[a].push_back(b);
    }
    live();
    cout<<learning<<" "<<last;
}
/*
6 6
0 8 9 2 7 5
5 4
5 3
1 5
0 1
0 2
2 1
*/
