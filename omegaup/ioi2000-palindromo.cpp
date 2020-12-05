#include <iostream>
#include <string>
using namespace std;
#define MAX 5001
int n;
int pal[MAX][3];
string word;


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    cin>>word;

    for(int i=2,k=2; i<=n; i++){
        for(int j=0; j+i<=n; j++){
            if(word[j]==word[j+i-1]) pal[j][k] = pal[j+1][(k+1)%3];
            else pal[j][k] = 1+ min(pal[j+1][(k+2)%3],pal[j][(k+2)%3]);
        }
        ++k%=3;
    }
    cout<<pal[0][n%3];
}
