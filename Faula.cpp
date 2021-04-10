#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int Guards(vector<int> P);

int n_objets;
int meters_covers;


int main(){
    int cases;
    cin >> cases;
    for(int i = 0 ; i < cases ; i++ ){
        cin >> n_objets >> meters_covers;
        vector<int> P;
        int pos;
        for(int j = 0 ; j < n_objets ; j++){
            cin >> pos;
            P.push_back(pos);
        }
        cout << Guards(P) << endl;
    }
    return 0;
}


int Guards(vector<int> P){
    sort(P.begin(), P.end());
    vector<int> G;
    G.push_back(P[0]+ meters_covers);
    int i = 0;
    for(int j = 1 ; j < n_objets ; j++){
        if( P[j] > G[i] + meters_covers){
            G.push_back(P[j] + meters_covers);
            i+=1; 
        }         
    }
    return i + 1;
}