#include<iostream>
using namespace std;
int N,c=0;
int l[50][50];
bool p[50][50];
void n(){
    int m=0;
    for(int j=0;j<N;j++,m=0){
        for(int i=0;i<N;i++){
            if(l[i][j]>m){
                m=l[i][j];
                if(p[i][j]==0)c++,p[i][j]=1;
            }
        }
    }
}
void s(){
    int m=0;
    for(int j=0;j<N;j++,m=0){
        for(int i=N-1;i>=0;i--){
            if(l[i][j]>m){
                m=l[i][j];
                if(p[i][j]==0)c++,p[i][j]=1;
            }
        }
    }
}
void e(){
    int m=0;
    for(int i=0;i<N;i++,m=0){
        for(int j=N-1;j>=0;j--){
            if(l[i][j]>m){
                m=l[i][j];
                if(p[i][j]==0)c++,p[i][j]=1;
            }
        }
    }
}
void w(){
    int m=0;
    for(int i=0;i<N;i++,m=0){
        for(int j=0;j<N;j++){
            if(l[i][j]>m){
                m=l[i][j];
                if(p[i][j]==0)c++,p[i][j]=1;
            }
        }
    }
}
int main(){
    cin>>N;
    for(int i=0;i<N;i++) for(int j=0;j<N;j++) cin>>l[i][j];
    for(int i=0;i<N;i++) for(int j=0;j<N;j++) p[i][j]=0;
    n();
    s();
    e();
    w();
    cout<<c;
}
