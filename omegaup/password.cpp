#include<iostream>
#include<math.h>
#include<string>
#include<windows.h>
using namespace std;
string password=" ";
string target;
int lenght=1,a;
unsigned long long int attempts=0;
void pass(int l=0){
    if(l==lenght){
        attempts++;
        cout<<password<<"\n";
        if(password==target){
            system("cls");
            cout<<"\n"<<attempts<<"\n\n";
            cin>>a;
        }
        return;
    }
    for(char i='0'; i<='9'; i++){
        password[l]=i;
        pass(l+1);
    }
}
int main(){
    cin>>target;
    for(; true; lenght++){
        password.assign(lenght,' ');
        pass();
    }
    cout<<attempts;
}
//1072340
