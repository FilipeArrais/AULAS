#include <iostream>
#include <vector>
using namespace std;


int rows;

vector<vector<int>> P;
vector<vector<int>> V;


int Path(int n);

int main() {
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;
    for(int i = 0 ; i < num; i++){
        cin >> rows;
        P.resize(rows,vector<int>(rows));
        V.resize(rows,vector<int>(rows));
        int inputs=1;
        for(int l = 0; l < rows ; l++){
            for(int k = 0; k < inputs; k++ ){
                cin >> P[l][k];      
            }
            inputs++;
        }        
        //chamar funçao
        cout <<Path(rows)<<endl;
        
        P.clear();
        V.clear();

    }  
    return 0;
}


int Path(int n){
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < i+1; j++){
           // if(i == 0){
            //    V[i][j]= P[i][j];
           // }
            //else if (j == 0){
            //    V[i][j]= P[i][j] + V[i-1][j];
            //}
           // else{
                V[i][j] = P[i][j] + max(V[i-1][j-1],V[i-1][j]);   
           // }              
        }
    }

    int best = 0;
    for(int j = 0; j < n ; j++ ){
        best = max(best,V[n-1][j]);
    }
    return best;
}