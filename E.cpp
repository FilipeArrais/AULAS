#include <iostream>
using namespace std;
#include <string> 
#include <cctype>
#include <cstring>
#include <stack>


/* usar getline para separar por espaços*/

int number(string a);

int main(){



    string str;

    stack <int> stack;
    int n1;
    int n2;
    int reps;
    cin >> reps;
    int *array= new int[reps]; 
    for(int l = 0; l< reps ; l++)
    {
        cout<<"vezes";
        while ((cin >> str ) )
        {
            
            if(number(str)){
                stack.push(stoi(str));
            }
            else{

                 if(str == "+"){

                    n1=stack.top();
                    stack.pop();
                    n2= stack.top();
                    stack.pop();
                    stack.push(n1 + n2);

                 }
                   
                if(str == "-"){
                    n1=stack.top();
                    stack.pop();
                    n2= stack.top();
                    stack.pop();
                    stack.push(n2-n1);
                    
                }
                    
            }

        }

    }
    
    while (!stack.empty())
    {
        cout << stack.top() << "\n";
        stack.pop();
    }

    return 0;
}

int number(string a){
    int i=0;
    while (a[i]!= '\0')
    {
        if (!isdigit(a[i]))
        {
            return 0;
        }
        i++;
    }

    return 1;
    
}