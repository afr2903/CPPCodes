#include<iostream>
#define MAX 10000
using namespace std;
int x1[2],y1[2],x2[2],y2[2], area, xmi, xma, ymi, yma;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    for(int i=0; i<=1; i++){
        cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
        xmi=min(x1[i],x2[i]), xma=max(x1[i],x2[i]), ymi=min(y1[i],y2[i]), yma=max(y1[i],y2[i]);
        x1[i]=xmi, x2[i]=xma, y1[i]=ymi, y2[i]=yma;
    }
    /*for(int i=0; i<=1; i++){
        cout<<x1[i]<<" "<<y1[i]<<" "<<x2[i]<<" "<<y2[i]<<"\n";
    }*/
    xmi=min(x1[0],x1[1]), xma=max(x2[0],x2[1]), ymi=min(y1[0],y1[1]), yma=max(y2[0],y2[1]);
    for(int i=ymi; i<=yma; i++){
        for(int j=xmi; j<=xma; j++){
            if(i>=y1[0] && i<y2[0] && j>=x1[0] && j<x2[0]) area++;
            else if(i>=y1[1] && i<y2[1] && j>=x1[1] && j<x2[1]) area++;
        }
    }
    cout<<area;
}
