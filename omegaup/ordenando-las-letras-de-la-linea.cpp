#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 101
string w;
char ord[MAX];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    getline(cin, w, '\n');
    int j=0;
    for(int i=0; i<w.size(); i++){
        if(w[i]>='a'&&w[i]<='z') ord[j++]=w[i];
    }
    sort(ord,ord+j);
    for(int i=0, j=0; i<w.size(); i++){
        if(w[i]>='a'&&w[i]<='z') cout<<ord[j++];
        else cout<<w[i];
    }
}
