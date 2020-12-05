#include<iostream>
using namespace std;
int main(){
    /*cout<<"k vuk kiere prro: ";
    char livro;
    cin>>livro;
    int vuk=(livro-'a')+1;
    cout<<vuk<<"\n";
    bool a;
    cin>>a;
    if(!a) cout<<"vienbenido :v";
    else cout<<"baneado, iamando a la shota >:v";
    char a;
    cin>>a;
    int m=a-'a'+1;
    if(a<'A'||a>'z'||(a<'a'&&a>'Z')) cout<<"no es letra >:v";
    else if(m>0) cout<<"minuscula :v";
    else cout<<"MAYUSCULA :V";
    char a;
    cin>>a;
    a-='A';
    if(!a) cout<<"A MAYUSCULA :V";
    else{
        a+='A';
        a-='a';
        if(!a) cout<<"a minuscula :v";
        else cout<<"no es a o A >:v";
    }
    char l;
    for(int i=1;i<='z'-'a'+1;i++){
        l=i+'a'-1;
        for(int z=0;z<i;z++){
            cout<<l;
        }
        cout<<"\n";
    }
    for(int i='Z'-'A'+1;i>0;i--){
        l=i+'A'-1;
        for(int z=i;z>0;z--){
            cout<<l;
        }
        cout<<"\n";
    }
    char l;
    bool b=1;
    for(int i=1;i<='z'-'a'+1;i++){
        if(b) l=i+'a'-1;
        else l=i+'A'-1;
        for(int z=0;z<i;z++){
            cout<<l;
        }
        cout<<"\n";
        if(b) b=0;
        else b=1;
    }*/
    int n;
    cin>>n;
    bool b=0;
    for(int i=1;i<=n;i++,b=!b){
        for(int z=1;z<=i;z++){
            cout<<b;
        }
        cout<<"\n";
    }
    return 0;
}
