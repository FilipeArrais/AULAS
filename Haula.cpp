#include <iostream>
using namespace std;
#include <vector>


vector<int> C;
vector<vector<int>> N;
int n, m;

bool Gcolor(int v, int color);

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    while(cin >> n >>m){
        bool flag = true;
        N = vector<vector<int> >(n + 1, vector<int>(n + 1));
        C = vector<int>(n + 1, -1);
        int n1,n2;

        for(int i = 0; i < m; i++){
            cin >> n1 >> n2;
            N[n1][n2] = 1;
            N[n2][n1] = 1;
        }
        for(int j = 1; j <= n ; j++ ){
            if(C[j] == -1){
                if(!Gcolor(j,0)){
                    flag = false;
                }
            }
        }
        if(!flag){
            cout << "NO" <<"\n";
        }
        else{
            cout << "NOT SURE"<<"\n";
        }
        
    }
    return 0;
}

//matriz adjacencia
//C->Matriz com cores atuais, inicializada a -1
//N[v]->vetor com os vizinhos de v
bool Gcolor(int v, int color){
    if(C[v] != -1){
        if(C[v] == color){
            return true;
        }
        else{
            return false;
        }
    }
    C[v]=color;
    for (int i = 0; i <= n ; i++){
        if(N[v][i] != 0){
            if (color == 0){
                if(Gcolor(i,1)==false){
                    return false;
                }
            }
            else{
                if(Gcolor(i,0)==false){
                    return false;
                }
            }
        }
    }
    return true;
    
}

