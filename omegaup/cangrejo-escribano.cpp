#include<iostream>
#include<string>
using namespace std;
#define MAX 1000001
struct p{
    char c, l;
    int u;
    string undone, done;
}command[MAX];
int n, u, j, j_undo, undo[MAX];
char c, l;
string word;
int main(){
    //ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>c;
        if(c=='T'){
            cin>>l;
            word+=l;
            command[j++]={c,l,0};
        }
        if(c=='U'){
            cin>>u;
            u=j-u;
            int k;
            string done="", undone="";
            for(k=j_undo; k>0; k--){
                if(u>undo[k])break;
                word=word.substr(0, word.size()-(j-undo[k]+1));
            }
            command[j]={c,' ',u, word.substr(word.size()-u, u)};
            undo[++j_undo]=j++;
            word=word.substr(0, word.size()-u);
        }
        if(c=='P'){
            cin>>u;
            cout<<word[u]<<"\n";
        }
    }
    for(int i=0; i<j; i++){
        cout<<command[i].c<<" "<<command[i].l<<" "<<command[i].u<<" ";
        cout<<command[i].undone<<"\n";

    }
}
/*
10
T a
T b
T c
U 2
T e
T d
U 3
T g
T h
U 2
*/
