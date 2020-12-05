#include<iostream>
using namespace std;
string w;
struct s{
    int n;
    int f;
};
s mean(int x){
    int sum = 0;
    int qnt = 0;
    int p = 0;
    s ans;
    for(int i=x; i<w.size(); i++){
        if(w[i]==')'){
            ans.f = i;
            break;
        }
        if(w[i]=='('){
            s temp = mean(i+1);
            sum+= temp.n, qnt++, i= temp.f;
        }
        else sum+= w[i]-'0', qnt++;
    }
    //cout<<x<<" "<<sum<<" "<<qnt<<"\n";
    ans.n = sum/qnt;
    return ans;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>w;
    s ans = mean(1);
    cout<<ans.n;
}
