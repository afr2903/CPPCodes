#include<iostream>
using namespace std;
string w;
int n;
int bucket[29];
int main(){
    //ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>w;
    n = w.size();
    for(int i=0; i<n; i++) bucket[ w[i]-'A'+1 ]++;
    int aux = 0;
    for(int i=1; i<=26; i++){
        if(bucket[i]%2==1){
            if(!aux) aux = i;
            else{
                cout<<"NO SOLUTION";
                return 0;
            }
        }
    }
    for(int i=0, j=n-1, c=1; c<=26;){
        if(bucket[c]>=2) w[i++] = w[j--] = c+'A'-1, bucket[c]-=2;
        else c++;
    }
    if(aux) w[n/2] = aux+'A'-1;
    cout<<w;
}
