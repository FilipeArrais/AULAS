#include <iostream>
using namespace std;
#include<vector>

int best = 0;
int n;
//iniciar matriz a zeros
vector<vector<int>> M;
vector<int> neighbor;

void rec(int i, int size);

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int ligacoes;
    cin >> n >> ligacoes;    
    M.resize(n,vector<int>(n));
    neighbor.resize(n,0);
    int no1;
    int no2;
    for(int i = 0; i < ligacoes; i++){
        cin >> no1 >> no2;
        M[no1][no2] = 1;
        M[no2][no1] = 1;
    }

    for(int i = 0; i < n; i++){
        rec(i,1);
    }

    cout << best << endl;
    return 0;
}


void rec(int i, int size){

    if(size > best){
        best= size;
    }

    int ub = 0;
    for(int k = i+1; k < n ; k++){
        ub +=1;
    }
    if(size + ub < best){
        return;
    }


    for(int j = i + 1; j < n ; j++){
        if( M[i][j]== 1){
            neighbor[j]+=1;
        }
    }
    for(int j = i + 1; j < n ; j++){
        if(neighbor[j] == 0){
           rec(j,size + 1); 
        }
        
    }
    for(int j = i + 1; j < n ; j++){
        if(M[i][j] == 1){
            neighbor[j]-=1;
        }
    }
}