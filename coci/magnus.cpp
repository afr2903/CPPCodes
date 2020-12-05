#include<iostream>
using namespace std;
string word;
bool honi[4];
int blocks;
int main(){
    cin>>word;
    for(int i=0; i<word.size(); i++){
        //cout<<honi[0]<<" "<<honi[1]<<" "<<honi[2]<<" "<<honi[3]<<"\n";
        if(word[i]=='H') honi[0]=1;
        if(word[i]=='O') if(honi[0])honi[1]=1;
        if(word[i]=='N') if(honi[1])honi[2]=1;
        if(word[i]=='I') if(honi[2])honi[3]=1;
        if(honi[3]){
            honi[0]=0, honi[1]=0, honi[2]=0, honi[3]=0;
            blocks++;
        }
    }
    cout<<blocks;
}
