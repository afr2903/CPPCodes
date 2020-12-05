/*
ID: afr10291
PROG: friday
LANG: C++
*/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int n, weekday=1;
int month[]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int times[7];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");
    fin>>n;
    for(int year=1900; year<1900+n; year++){
        if( (year%4==0 && year%100!=0) || (year%100==0 && year%400==0) )month[2]=29;
        for(int i=1; i<=12; i++)
            times[(weekday+5)%7]++, weekday=(weekday + month[i]%7) %7;
        month[2]=28;
    }
    fout<<times[6];
    for(int i=0; i<6; i++) fout<<" "<<times[i];
    fout<<"\n";
    return 0;
}

