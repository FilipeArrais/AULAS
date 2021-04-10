#include <iostream>
using namespace std;
#include <vector>

void ze(int v, int c);


int n,m,k; 

//ligaçoes
vector<vector<bool>> links;
//custo
 vector<vector<int>> custo;

vector<bool> active;
vector<int> deg;
int best=100000000;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    while (cin >> n >> m >> k )
    {
        vector<bool> aux(n);
        vector<int> aux_c(n);

       for(int i = 0 ; i < n ; i++){
           links.push_back(aux);
           custo.push_back(aux_c);
           active.push_back(false);
           deg.push_back(false);
           
       }

        int no1, no2, cust;
        
        for(int i = 0 ; i < m ; i++){

            cin >> no1 >> no2 >> cust;
            links[no1-1][no2-1]=true;
            links[no2-1][no1-1]= true;
            custo[no1-1][no2-1]=cust;
            custo[no2-1][no1-1]=cust;
        }
        active[0]=true;
        ze(1,0);

        if(best!= 100000000){
            cout <<best<<"\n";
        }
        else{
            cout << "NO WAY!"<<"\n";
        }
        best=100000000;
        links.clear();
        custo.clear();
        active.clear();
        deg.clear();

    }
    return 0;
}

void ze(int v, int c){

    if(c >= best){
        return;
    }
    if(v == n){
        best = c;
        return;
    }
    for(int i = 0; i < n ; i++){
        if(active[i] && (deg[i] < k)){
            for(int j = 0; j < n; j++){
                if(!(active[j])){
                    if(links[i][j]){
                        deg[i]+=1;
                        deg[j]+=1;
                        active[j]=true;
                        ze(v+1, c+custo[i][j]);
                        deg[i]-=1;
                        deg[j]-=1;
                        active[j]=false;

                    }
                }
            }
        }
    }
}