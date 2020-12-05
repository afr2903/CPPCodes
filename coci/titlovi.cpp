#include<iostream>
#include<vector>
using namespace std;
struct timestamp{
    int h, m, s, milis;
};
struct srt{
    string caso;
    timestamp inicio;
    timestamp fin;
    vector<string>subtitles;
}block;

vector<srt>movie;
string sub;
char c;
int t;
int main(){
    //ios_base::sync_with_stdio(0); cin.tie(0);
    while(true){
        cin>>block.caso;
        if(block.caso[0]=='#')break;
        cin>>block.inicio.h>>c>>block.inicio.m>>c>>block.inicio.s>>c>>block.inicio.milis;
        cin>>c>>c>>c;
        cin>>block.fin.h>>c>>block.fin.m>>c>>block.fin.s>>c>>block.fin.milis;
        getline(cin,sub,'\n');
        block.subtitles.clear();
        while(true){
            getline(cin,sub,'\n');
            int help=sub[0];
            //cout<<help<<"\n";
            if(sub[0]==0 || sub[0]=='#')break;
            block.subtitles.push_back(sub);
        }
        movie.push_back(block);
        if(sub[0]=='#')break;
    }
    cin>>t;
    for(int i=0; i<movie.size(); i++){
        block=movie[i];
        cout<<block.caso<<"\n";

        block.inicio.milis+=t;
        if(block.inicio.milis<0) block.inicio.s--;
        block.inicio.s+=block.inicio.milis/1000;
        if(block.inicio.milis<0) block.inicio.milis=1000+block.inicio.milis%1000;
        block.inicio.milis%=1000;
        if(block.inicio.s<0) block.inicio.m--;
        block.inicio.m+=block.inicio.s/60;
        if(block.inicio.s<0) block.inicio.s=60+block.inicio.s%60;
        block.inicio.s%=60;
        block.inicio.h+=block.inicio.m/60;
        block.inicio.m%=60;
        if(block.inicio.h<10)cout<<"0";
        cout<<block.inicio.h<<":";
        if(block.inicio.m<10)cout<<"0";
        cout<<block.inicio.m<<":";
        if(block.inicio.s<10)cout<<"0";
        cout<<block.inicio.s<<",";
        if(block.inicio.milis<100)cout<<"0";
        if(block.inicio.milis<10)cout<<"0";
        cout<<block.inicio.milis;

        cout<<" --> ";

		block.fin.milis+=t;
        if(block.fin.milis<0) block.fin.s--;
        block.fin.s+=block.fin.milis/1000;
        if(block.fin.milis<0) block.fin.milis=1000+block.fin.milis%1000;
        block.fin.milis%=1000;
        if(block.fin.s<0) block.fin.m--;
        block.fin.m+=block.fin.s/60;
        if(block.fin.s<0) block.fin.s=60+block.fin.s%60;
        block.fin.s%=60;
        block.fin.h+=block.fin.m/60;
        block.fin.m%=60;
        if(block.fin.h<10)cout<<"0";
        cout<<block.fin.h<<":";
        if(block.fin.m<10)cout<<"0";
        cout<<block.fin.m<<":";
        if(block.fin.s<10)cout<<"0";
        cout<<block.fin.s<<",";
        if(block.fin.milis<100)cout<<"0";
        if(block.fin.milis<10)cout<<"0";
        cout<<block.fin.milis<<"\n";

        for(int j=0; j<block.subtitles.size(); j++){
            sub=block.subtitles[j];
            cout<<sub<<"\n";
        }
        if(i<movie.size()-1)cout<<"\n";
    }
    cout<<"#";
    //cout<<block.inicio.h<<block.inicio.m<<block.inicio.s<<block.inicio.milis;
}

/*
1
1,1,1,400 --> 1,1,1,200
aasdasdasd
#
-10000
1
01:01:0-8,00-600 --> 01:01:0-8,00-800
aasdasdasd
#
Process returned 0 (0x0)   execution time : 22.455 s
Press any key to continue.

*/
