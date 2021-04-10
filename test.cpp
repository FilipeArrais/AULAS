#include <iostream>
using namespace std;
#include <vector>

int main(){

    vector<vector<int>> vec = {{1,2,3},
                               {4,5,6}};
    
    vector<vector<int>> vec2 = {{1,2,3},
                               {4,5,6}};

    if (vec == vec2){
        cout << "ta top";
    }

    return 0;
}