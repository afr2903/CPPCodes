/* Use the slash-star style comments or the system won't see your
   identification information */
/*
ID: afr2903
TASK: test
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
ofstream fout ("test.out");
ifstream fin ("test.in");

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a, b;
    fin >> a >> b;
    fout << a+b << endl;
    return 0;
}
