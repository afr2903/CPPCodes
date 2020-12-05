#include<iostream>
using namespace std;
#define MAX 1001
int n[MAX][MAX], m[MAX][MAX];
bool b[MAX][MAX], x;
int ren, col, r, c;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>ren>>col;
    for(int i=1; i<=ren; i++) for(int j=1; j<=col; j++) cin>>n[i][j];
    cin>>r>>c;
    for(int i=1; i<=r; i++) for(int j=1; j<=c; j++) cin>>m[i][j];

    for(int i=1; i<=ren-r+1; i++){
        for(int j=1; j<=col-c+1; j++){
            x=1;
            for(int im=1,in=i; im<=r; in++,im++){
                if(!x)break;
                for(int jm=1,jn=j; jm<=c; jn++,jm++){
                    if(n[in][jn] != m[im][jm]) x=0;
                    if(!x)break;
                }
            }
            if(x) for(int in=i; in<i+r; in++) for(int jn=j; jn<j+c; jn++) b[in][jn]=1;
        }
    }
    for(int i=1; i<=ren; i++) {
        for(int j=1; j<=col; j++) cout<<b[i][j]<<" ";
        cout<<"\n";
    }
}
/*
5 5
2 1 0 8 2
4 2 1 8 2
6 4 2 5 3
4 2 3 9 0
0 0 0 0 0
2 2
2 1
4 2
*/
