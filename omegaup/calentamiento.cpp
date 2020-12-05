#include<iostream>
#include<vector>
#include<algorithm>
#define MAX 1000005
#define p1 first
#define p2 second
using namespace std;
int n, a;
vector< pair<int,int> > h;
int current, max_isl;
bool isl[MAX];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a;
        h.push_back( make_pair(a,i) );
    }
    sort(h.begin(), h.end());
    //for(int i=0; i<n; i++) cout<<h[i].p2<<" ";
    for(int i=n-1; i>=0; i--){
        int j=i;
        while(h[j].p1==h[j-1].p1) j--;
        int aux=j;
        for(; j<=i; j++){
            isl[h[j].p2]=1;
            current++;
            if(isl[h[j].p2+1]) current--;
            if(isl[h[j].p2-1]) current--;
        }
        max_isl= max(max_isl, current);
        i=aux;
    }
    cout<<max_isl;
}
