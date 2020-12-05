#include<iostream>
using namespace std;
#define INF 99999999
int n, min1V=INF, min1Id,  min2V=INF, min2Id,  min3V=INF, min3Id;
long long ans;
int caras[7], banned[]={0,6,5,4,3,2,1};
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=6; i++) cin>>caras[i];
    if(n<=0){
        cout<<"0";
        return 0;
    }
    if(n==1){
        int maxV=0;
        for(int i=1; i<=6; i++) ans+= caras[i], maxV= max(maxV, caras[i]);
        cout<<ans-maxV;
        return 0;
    }

    for(int i=1; i<=6; i++) if(caras[i]<min1V) min1V=caras[i], min1Id=i;
    caras[min1Id]= INF;
    for(int i=1; i<=6; i++){
        if(i==banned[min1Id]) continue;
        if(caras[i]<min2V) min2V=caras[i], min2Id=i;
    }
    caras[min2Id]= INF;
    for(int i=1; i<=6; i++){
        if(i==banned[min1Id] || i==banned[min2Id]) continue;
        if(caras[i]<min3V) min3V=caras[i], min3Id=i;
    }
    cout<< 4*(min1V+min2V+min3V) + ( (n-2)*(n-2) + 4*(n-1)*(n-2) )*(min1V) + 4*((n-2)+(n-1))*(min1V+min2V);
}
