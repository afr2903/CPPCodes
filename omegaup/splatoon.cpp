#include<iostream>
#include<functional>
#include<queue>
#define MAX 2001
#define N 4
#define B 3
#define A 2
using namespace std;

int n, d, c;
string st;
bool visited[MAX][MAX];
priority_queue< pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>> >pq;
pair<int,pair<int,int>> actual; //tiempo  posicion  disparos
pair<int,pair<int,int>> nuevo;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>d;
    cin>>st;
    actual={0,{0,d}};
    pq.push(actual);
    while(!pq.empty()){
        actual=pq.top();
        pq.pop();
        //cout<<actual.first<<" "<<actual.second.first<<" "<<actual.second.second<<"\n";
        if(visited[actual.second.first][actual.second.second])continue;
        visited[actual.second.first][actual.second.second]=1;

        if(actual.second.first>=n-1){
            cout<<actual.first;
            exit(0);
        }

        nuevo.first=actual.first+1;
        nuevo.second.second=actual.second.second;

        if(st[actual.second.first]=='N')c=N;
        else if(st[actual.second.first]=='-')c=B;
        else c=A;

        for(int i=1;i<=c;i++){
            nuevo.second.first= actual.second.first+i;
            if(nuevo.second.first==n)break;
            if(st[nuevo.second.first]!=st[actual.second.first]){
                pq.push(nuevo);
                break;
            }
            pq.push(nuevo);
        }

        nuevo.second.first=actual.second.first+c-1;
        pq.push(nuevo);

        if(actual.second.second>0){
            nuevo.second.second= actual.second.second-1;
            c=4;
            for(int i=1;i<=c;i++){
                nuevo.second.first= actual.second.first+i;
                if(nuevo.second.first==n)break;
                pq.push(nuevo);
            }
            c=6;
            nuevo.first=actual.first+2;
            for(int i=5;i<=c;i++){
                nuevo.second.first= actual.second.first+i;
                if(nuevo.second.first==n)break;
                pq.push(nuevo);
            }
        }
    }
}
