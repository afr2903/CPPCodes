#include<iostream>
using namespace std;
string w;
bool palindrome(unsigned long long mask, int siz){
    //cout<<mask<<"\n";
    if(!mask) return true;

    unsigned long long lsb = mask;
    lsb &= -lsb;
    mask -= lsb;
    if(!mask && siz%2) return true;

    return false;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>w;
    int counter = 0;
    unsigned long long mask = 0;

    for(int i=0; i<w.size(); i++){
        mask = 0;
        for(int j=i; j<w.size(); j++){
            mask = mask ^ (1<<(w[j]-'a'));
            if( palindrome(mask, j-i+1) ) counter++;
        }
    }
    cout<<counter;
}
