#include <iostream>
#include <vector>
using namespace std;
#include <math.h>


int sum (vector<int> v);
double zeManel(vector<int> v);



int main(){

    int cases;

    while(cin >> cases){
    
        vector<int> values;
        values.push_back(0);
        float value;
        for(int i = 0; i < cases ; i++){
            cin >> value;
            values.push_back(value*100);
        }        
        //funçao
        double res = zeManel(values);
        cout << res/100<<endl;

        values.clear();

    

    }


    return 0;
}

int sum (vector<int> v){
    int sum = 0;
    for(int i = 0; i < (int)v.size() ; i++){
        sum += v[i];
    }
    return sum;
}

double zeManel(vector<int> v){
    int n = v.size();
    int soma = sum(v);
    int k = floor(soma/2);

    vector<vector<bool>> T(n+1,vector<bool>(k+1));

    for(int i = 0; i < n+1 ; i++){
        T[i][0]= true;
    }

    for(int i = 1; i < n+1; i++){
        for(int j = 0; j < k; j++){
            if(v[i] > j ){
                T[i][j]=T[i-1][j];
            }
            else{
                T[i][j]= (T[i-1][j] || T[i-1][j-v[i]]);
            }
        }
    }
    int s1 = 0;
    for(int i = 0; i < k+1; i++){
        if(T[n][i]){
            s1=i;
        }
    }
    int s2 = soma - s1;
    return abs((s2-s1));

}

