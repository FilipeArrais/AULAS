#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> vec;  
    int num;

    

    while (cin >> num)
    {
        vec.push_back(num);
    }

    sort(vec.begin() ,vec.end());


    for(int i = 0; i < int(vec.size()); i++ ){
        cout << vec[i] <<"\n";
    }
  
    return 0;
}