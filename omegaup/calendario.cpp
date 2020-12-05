#include<iostream>
using namespace std;
int main(){
    int d, t;
    cin>>d>>t;
    cout<<"Sun Mon Tue Wed Thr Fri Sat\n";
    for(int i=1; i<d; i++) cout<<"    ";
    cout<<"  ";
    for(int i=1; i<t; i++, d++){
        cout<<i;
        if(d==7){
            d=0;
            cout<<"\n ";
            if(i<9)cout<<" ";
        }
        else{
            cout<<"  ";
            if(i<9)cout<<" ";
        }
    }
    cout<<t;
}
