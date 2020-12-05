#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
#define MAXV 10005
#define MAXC 55
#define INF 999999999
int c, v, temp;
int votes[MAXC][MAXV];
int id[MAXC], topVotes[MAXC];
int minV, maxV;
vector<int> minVC;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>c>>v;
    float mv= v;
    mv= ceil(mv/2);
    for(int i=1; i<=v; i++){
        for(int j=1; j<=c; j++){
            cin>>temp;
            votes[temp][i]= j;
        }
    }
    for(int i=1; i<=v; i++) id[i]=1;
    /*for(int i=1; i<=c; i++){
        for(int j=1; j<=v; j++){
            cout<<votes[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<mv;*/

    while(true){
        //cout<<".";
        minV= INF, maxV= 0;
        for(int i=1; i<=v; i++){
            if(id[i]>c) continue;
            temp = votes[id[i]][i];
            maxV = max(maxV, ++topVotes[temp]);  //a
            if(maxV >= mv){
                cout<<temp<<"\n";
                return 0;
            }
            if( topVotes[temp]<=minV){
                minV = topVotes[temp];
                minVC.clear();
                minVC.push_back(temp);
            }
            //cout<<topVotes[temp]<<"\n";
        }
        for(int i=0; i<minVC.size(); i++) if(minVC[i]==maxV && minV!=maxV) minVC.erase(minVC.begin()+i);
        if(minVC.size()==0){
            cout<<"0\n";
            //cout<<maxV;
            return 0;
        }
        for(int i=1; i<=v; i++){
            if(id[i]>c) continue;
            temp = votes[id[i]][i];
            for(auto x:minVC){
                if(temp==x){
                    id[i]++;
                    break;
                }
            }
        }
        for(int i=1; i<=c; i++) topVotes[i]=0;
    }
}
