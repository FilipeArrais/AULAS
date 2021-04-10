#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

bool sum3(vector<int> vec,int n);

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;    
    while (cin >> n )
    {
        int num;
        vector<int> vec;
        while ( ( cin >> num) && num != 0)
        {
            vec.push_back(num);
        }
        if(sum3(vec,n)){
            cout << "Fair\n";
        }
        else{
            cout << "Rigged\n";
        }
    }

    return 0;
}


bool sum3(vector<int> vec, int n){
    //sort do vector
    sort(vec.begin() ,vec.end());
    int start,end;
    for(int i = 0 ; i < n-1; i++ ){
        if(vec[i] > 0){
            return false;
        }
        start = i+1;
    	end = n-1;
        while (start != end)
        {
            if(vec[i] + vec[start] + vec[end]==0){
                return true;
            }
            else if (vec[i] + vec[start] + vec[end]<0){
                start +=1;
            }
            else{
                 end -=1;
            }
        }

        }
        return false;
}


