#include<bits/stdc++.h>
using namespace std;
int v=0;
int ar[4];
string simplificar(string,char);
void despejar(char);
bool dividir(string &ecuacion){
    string e1,e2;
    int s=0;
    for(int i=0;i<ecuacion.size();i++){
        if(ecuacion[i]=='=')s++;
    }
    if(s>1)return 0;
    if(s<1)return 0;
    for(int i=0;i<ecuacion.size();i++){
        if(ecuacion[i]=='='){
            if(i==0)return 0;
            e1=ecuacion.substr(0,i);
        }
    }
    e2=ecuacion.substr(e1.size()+1,ecuacion.size()-e1.size()-1);
    e1=simplificar(e1,'x');
    cout<<"\n"<<e1<<"=";
    e2=simplificar(e2,'x');
    cout<<e2<<"\n\n";
    ecuacion=e1+"="+e2;
    despejar('x');
    return 1;
}
string simplificar(string ecuacion, char literal){
    int s=0,x=0,a=0,m=0,b=0;
    for(int i=ecuacion.size()-1;i>=0;i--){
        a=0;
        if(ecuacion[i]>='0'&&ecuacion[i]<='9'){
            a=ecuacion[i]-'0';
            for(i--,m=10;i>=0;i--,m=m*10){
                if(ecuacion[i]>='0'&&ecuacion[i]<='9')a+=(ecuacion[i]-'0')*m;
                else break;
            }
            if(ecuacion[i]=='+')s+=a;
            else if(ecuacion[i]=='-')s-=a;
            else s+=a;
        }
        if(ecuacion[i]==literal){
            a=0;
            for(i--,m=1;i>=0;i--,m=m*10){
                if(ecuacion[i]>='0'&&ecuacion[i]<='9')a+=(ecuacion[i]-'0')*m;
                else break;
            }
            if(a==0){
                if(ecuacion[i+1]>='0'&&ecuacion[i+1]<='9')a=0;
                else a=1;
            }
            if(ecuacion[i]=='+')x+=a;
            else if(ecuacion[i]=='-')x-=a;
            else x+=a;
        }
    }
    ar[v++]=x;
    ar[v++]=s;
    ecuacion="0000000000000000000000000000000000000000";
    if(x<0)ecuacion[b++]='-',x*=-1;
    if(x!=0){
        int i=10;
        while(x>=i)i*=10;
        for(i/=10;i>=1;i/=10){
            ecuacion[b++]=(x/i)+'0';
            a=(x/i);
            x-=a*i;
        }
        ecuacion[b++]=literal,x=1;
    }
    if(s<0)ecuacion[b++]='-',s*=-1;
    else if(x!=0&&s!=0)ecuacion[b++]='+';
    if(s>0||x==0){
        int i=10;
        while(s>=i)i*=10;
        for(i/=10;i>=1;i/=10){
            ecuacion[b++]=(s/i)+'0';
            a=(s/i);
            s-=a*i;
        }
    }
    return ecuacion.substr(0,b);
}
void despejar(char literal){
    swap(ar[1],ar[2]);
    ar[1]*=-1,ar[2]*=-1;
    if(ar[0]!=0)cout<<ar[0]<<literal;
    if(ar[1]>0){
        if(ar[0]!=0)cout<<"+";
        cout<<ar[1]<<literal;
    }
    if(ar[1]<0)cout<<ar[1]<<literal;
    if(ar[1]==0&&ar[0]==0)cout<<"0";
    cout<<"=";
    if(ar[2]!=0)cout<<ar[2];
    if(ar[3]>0){
        if(ar[2]!=0)cout<<"+";
        cout<<ar[3];
    }
    if(ar[3]<0)cout<<ar[3];
    if(ar[3]==0&&ar[2]==0)cout<<"0";
    cout<<"\n\n";

    int x=ar[0]+ar[1],s=ar[2]+ar[3];
    if(x==0){
        cout<<"Error";
        return;
    }
    cout<<x<<literal<<"="<<s<<"\n\n";
    float d=s;
    cout<<literal<<"="<<d/x;
}
int main(){
    string ecuacion;
    while(true){
        cin>>ecuacion;
        if(!dividir(ecuacion))cout<<"Error";
        cout<<"\n"<<"-------------------------------------------------------------------------------"<<"\n";
        v=0,ar[0]=0,ar[1]=0,ar[2]=0,ar[3]=0;
    }
}
//5x+4x-110x+x+10-50-4+2=100x-10x+x+5+4-100-2
