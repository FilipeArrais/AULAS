#include <iostream>
using namespace std;
#include <string> 
#include <list>

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    list<int> lista ;
    lista.push_back(0);

    list<int>::iterator p = lista.begin();
    

    string str;


    while (cin >> str)
    {
        if(str == "INSERT"){
            string pos;
            cin >> pos;
            if (pos == "RIGHT"){
                int num;
                cin >> num;
                advance(p,1);
                lista.insert(p,num);
                advance(p,-2);
                //cout <<"PR "<<*p<<"\n";
                
            }
            else{
                int num;
                cin >> num;
                lista.insert(p,num);
                
                //cout <<"P "<<*p<<"\n";
                
            }
        }

        if(str == "MOVE"){
            string pos;
            cin >> pos;
            if (pos == "RIGHT"){

                advance(p, 1);
                ///cout <<"PR "<<*p<<"\n";
            }
            else{
                 advance(p, -1);
                 //cout <<"P "<<*p<<"\n";
            }
        }

    }
    for (list<int>::iterator i = lista.begin(); i != lista.end(); i++) 
        cout << *i << "\n"; 
    
    return 0;
}