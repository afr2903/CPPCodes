#include <iostream>
using namespace std;
#define col first
#define fila second

struct ans{
    char p,c,f;
};

ans ajedrecista(pair <char, int> RB, pair <char, int> T, pair <char, int> RN)
{
    if (RN.col <= 'c' && T.col <= 'c')
        return {'T','h',T.fila};
    if (RN.col >= 'f' && T.col >= 'f')
        return {'T','a',T.fila};
    if (T.fila > RN.fila + 1)
        return {'T',T.col,T.fila-1};
    if (RB.fila > RN.fila + 2)
        return {'R',RB.col,RB.fila-1};
    if (RB.col % 2 != RN.col % 2){
        if (T.col == 'a')
            return {'T','b',T.fila};
        else if (T.col == 'b')
            return {'T','a',T.fila};
        else if (T.col == 'g')
            return {'T','h',T.fila};
        else if (T.col == 'h')
            return {'T','g',T.fila};
    }
    else if (RB.col < RN.col)
        return {'R',RB.col+1,RB.fila};
    else if (RB.col > RN.col)
        return {'R',RB.col-1,RB.fila};
    else
        return {'T',T.col,T.fila-1};
}
int main() {
    pair <char, int> RB, T, RN;
    RB.col = 'a';
    RB.fila = 8;
    T.col = 'b';
    T.fila = 8;
    RN.col = 'a';
    RN.fila = 6;
    cout<<ajedrecista(RB,T,RN).c;
    T.col = 'h';
    T.fila = 8;
    cout<<ajedrecista(RB,T,RN);
    T.col = 'h';
    T.fila = 0;
    cout<<ajedrecista(RB,T,RN);
    return 0;
}
