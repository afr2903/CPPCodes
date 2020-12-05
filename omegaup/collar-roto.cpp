#include<iostream>
#include<string>
#define MAX 701
using namespace std;
string collar;
struct conjunto{
    char color;
    int siz;
    int nxt;
    int prev;

}arr[MAX];

int sum(int curr, int steps){
    int aux = arr[curr].nxt;
    int tempSum = 0;
    for(int j=1; j<steps; j++){
        tempSum+= arr[aux].siz;
        if( arr[aux].nxt==-1 ) return tempSum;
        aux = arr[aux].nxt;
    }
    if( arr[aux].color=='w' ) tempSum+= arr[aux].siz;
    return tempSum;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, c, idx, in = 1;
    int ans=0, tempAns;
    conjunto temp;
    cin>>c;
    for(int q=1; q<=c; q++){
        cin>>n;
        cin>>collar;
        idx = in = 1;
        ans = 0;
        collar += collar;
        char color = collar[0];
        temp = {color, 1, 2, -1};
        for(int i=1; i<2*n; i++){
            if( collar[i]==color ){
                temp.siz++;
                continue;
            }
            arr[idx++] = temp;
            temp = {color=collar[i], 1, idx+1, idx-1};
        }
        temp.nxt = -1;
        arr[idx] = temp;
        if(temp.siz > n){
            cout<<n;
            break;
        }

        for(int i=1; i<=idx; i++){
            if( arr[i].color=='w' ){
                if( arr[i].prev == -1){
                    if( arr[arr[i].nxt].nxt!=-1 ) arr[arr[arr[i].nxt].nxt].prev = i;
                    temp = { arr[arr[i].nxt].color, arr[arr[i].nxt].siz+arr[i].siz, arr[arr[i].nxt].nxt, -1};
                    arr[i] = temp;
                    continue;
                }
                if( arr[i].nxt == -1){
                    if( arr[arr[i].prev].prev!=-1 ) arr[arr[arr[i].prev].prev].nxt = i;
                    temp = { arr[arr[i].prev].color, arr[arr[i].prev].siz+arr[i].siz, -1, arr[arr[i].prev].prev};
                    arr[i] = temp;
                    continue;
                }
                if( arr[ arr[i].prev ].color == arr[ arr[i].nxt ].color ){
                    if( arr[arr[i].prev].prev!=-1 ) arr[arr[arr[i].prev].prev].nxt = i;
                    if( arr[arr[i].nxt].nxt!=-1 ) arr[arr[arr[i].nxt].nxt].prev = i;
                    temp = { arr[arr[i].prev].color, arr[arr[i].prev].siz+arr[arr[i].nxt].siz+arr[i].siz, arr[arr[i].nxt].nxt, arr[arr[i].prev].prev};
                    arr[i] = temp;
                    if(temp.prev == -1) in = i;
                }
            }
        }

        idx = in;
        while(idx != -1){
            if( arr[idx].color=='w' ){
                idx = arr[idx].nxt;
                continue;
            }
            tempAns = arr[idx].siz;
            if( idx!=in ) if( arr[arr[idx].prev].color=='w' ) tempAns+= arr[arr[idx].prev].siz;
            if( arr[idx].nxt!=-1 ){
                if( arr[arr[idx].nxt].color=='w' ) tempAns+= sum(idx, 3);
                else tempAns+= sum(idx, 2);
            }
            ans = max(ans, tempAns);

            idx = arr[idx].nxt;
        }

        /*idx = in;
        while(idx != -1){
            cout<<arr[idx].color<<" "<<arr[idx].siz<<"\n";
            idx = arr[idx].nxt;
        }*/
        cout<<min(ans, n)<<"\n";

    }
}
