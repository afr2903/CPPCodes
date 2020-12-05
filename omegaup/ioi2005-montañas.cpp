#include<iostream>
#include<vector>
using namespace std;
int n;
char c;
struct st{
    int start, finish, half, siz, lazy=0, highest=0, sum=0;
    vector<st> s;
    st(int s=1, int f=n){
        start=s, finish=f, siz=finish-start+1, half=(start+finish)/2;
    }
    void refresh(){
        if(s.empty() && start!=finish){
            s.push_back(st(start,half));
            s.push_back(st(half+1,finish));
        }
        if(lazy!=0){
            if(!s.empty()) s[0].lazy=s[1].lazy=lazy;
            sum=highest=lazy*siz;
        }
        lazy=0;
    }
    int query(int h){
        refresh();
        if(start==finish){
            if(highest>h) return start-1;
            return start;
        }
        s[0].refresh();
        if(s[0].highest>h) return s[0].query(h);
        return s[1].query(h-s[0].sum);

    }
    void update(int a, int b, int d){
        refresh();
        if(a>finish || b<start) return;
        if(a<=start && b>=finish){
            lazy=d;
            refresh();
            return;
        }
        s[0].update(a,b,d);
        s[1].update(a,b,d);

        sum=s[0].sum+s[1].sum;
        highest=max(s[0].highest, s[0].sum+s[1].highest);
    }
};
int main(){
    int h, a, b, d;
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    st segtree;
    while(1){
        cin>>c;
        if(c=='I'){
            cin>>a>>b>>d;
            segtree.update(a,b,d);
        }
        else if(c=='Q'){
            cin>>h;
            cout<<segtree.query(h)<<"\n";
        }
        else break;
    }
}
