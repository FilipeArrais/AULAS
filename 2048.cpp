#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n_cases;

    cin >> n_cases;

    for(int i = 0 ; i< n_cases; i++){
        int N;
        int M;
        int tabuleiro[20][20];
        cin >> N >> M;
        int num;
        for (int j = 0 ; j < N; j++){
            for (int  k = 0; k < N; k++){
                cin>>num;
                tabuleiro[j][k]=num;
            }
        }
        cout << tabuleiro[0][0];
    }

}