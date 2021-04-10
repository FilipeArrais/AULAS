#include <iostream>
using namespace std;

int main() {
    int tam;
    int i;
    cin >> tam ;


    int *array= new int[tam]; 

    for (i = 0; i < tam; i++)
    {
        cin >> array[i];
    }

    for(i = tam-1 ; i > 0; i--){
        cout << array[i] <<" "; 
    }
    cout << array[i] << "\n";
    
    return 0;
}