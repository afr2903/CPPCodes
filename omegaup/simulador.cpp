#include<iostream>
using namespace std;
string ins[1000];
int r[10];
int n;
string n2s(int x){
    string w = "000";
    w[2] = x%10+'0';
    w[1] = ((x%100)/10)+'0';
    w[0] = (x/100)+'0';
    return w;
}
int s2n(string w){
    int x = 0;
    x = (w[0]-'0')*100 + (w[1]-'0')*10 + (w[2]-'0');
    return x;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0; i<1000; i++) ins[i]="000";
    for(int i=0; i<n; i++) cin>>ins[i];
    int p=0, c=0;
    while(true){
        c++;
        if(p<0||p>=n) break;
        int a= ins[p][0], b= ins[p][1]-'0', c= ins[p][2]-'0';
        p++;

        if(a=='0'){
            if(b==1)      r[c]--;
            else if(b==2) p = r[c];
            else break;
        } else {
            if(a=='1')      r[b] = c;
            else if(a=='2') r[b] += c;
            else if(a=='3') r[b] *= c;
            else if(a=='4') r[b] = r[c];
            else if(a=='5') r[b] += r[c];
            else if(a=='6') swap(r[b], r[c]);
            else if(a=='7') r[b] = s2n( ins[r[c]] );
            else if(a=='8') ins[r[c]] = n2s( r[b] );
            else if(r[c]!=0) p = r[b];
        }
        r[b] %= 1000, r[c] %= 1000;
    }
    cout<<c<<"\n";
    for(int i=0; i<10; i++) cout<<(r[i]%1000)<<"\n";
}
