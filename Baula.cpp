#include <iostream>
using namespace std;


int tabuleiro[400][400] {}; //inicia a matraiz a 0s

int moves(int x,int y,int m);

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int res=0;
    int n;

    cin >> n;

    for(int i = 0; i < n ; i++){
        int x;
        int y;
        int m;

        cin >> x >> y >> m;
        res += moves(x,y,m);

    }
    cout << res <<  "\n";
}


int moves(int x,int y,int m){
    if(m < 0){
        return 0;
    }
    int  v = 0;
    if(tabuleiro[x+200][y+200]== 0 ){
        tabuleiro[x+200][y+200]=1;
        v=1;
    }
    return v + moves(x-2,y-1,m-1)
             + moves(x-2,y+1,m-1)
             + moves(x+2,y-1,m-1)
             + moves(x+2,y+1,m-1)
             + moves(x-1,y-2,m-1)
             + moves(x-1,y+2,m-1)
             + moves(x+1,y-2,m-1)
             + moves(x+1,y+2,m-1);

}