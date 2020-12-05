#include <iostream>
using namespace std;
#define MAX 10001

int n;
int parent[MAX];
int find(int x){
    if(parent[x]==x)return x;
    parent[x]=find(parent[x]);
    return parent[x];
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)parent[i]=i;
	char c;
	int a,b;
	while(true){
	    cin>>c;
	    if(c=='D'){
	        cin>>a>>b;
	        parent[find(a)]=find(b);
	    }
	    else if(c=='P'){
	        cin>>b;
	        a=find(1);
	        b=find(b);
	        if(a==b)cout<<1<<"\n";
	        else cout<<0<<"\n";
	    }
	    else break;
	}
	//for(int i=1;i<=n;i++)cout<<parent[i]<<" ";
}
