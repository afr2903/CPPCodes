#include<iostream>
#define MAX 1000005
using namespace std;
int n, aux, maxR, currR, ans;
int bucket[MAX], avNum[MAX];

int main(){
    //ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>aux;
        bucket[aux]++;
        maxR = max(maxR, aux);
    }
    aux = -1;
    for(int i=0; i<MAX; i++){
        if(bucket[i]) aux = i;
        avNum[i] = aux;
    }
    //for(int i=0; i<=20; i++) cout<<avNum[i]<<" ";
    /*while(maxR!=-1){
        ans++;
        aux = currR = maxR;
        bucket[maxR]--;
        if(!bucket[maxR]){
            if(!maxR) break;
            maxR = avNum[maxR-1];
        }
        while(currR){
            do{ aux = avNum[aux-1]; }while(aux!=-1 || !bucket[aux]);
            if(aux==-1) break;
            bucket[aux]--;
            if(!bucket[maxR]){
                if(!maxR) break;
                maxR = avNum[maxR-1];
            }
            currR = min(aux, currR-1);
        }
    }*/
    aux = maxR;
    while(aux!=-1){
        currR = MAX;
        while(currR){
            bucket[aux]--;
            currR = min(aux, currR-1);
            if(!bucket[aux]&&aux!=0) aux = avNum[aux-1];
        }
        ans++;
        if(aux==0 && !bucket[aux]) break;
    }
    cout<<ans;
}
