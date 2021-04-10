#include <cctype>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string str = "ad138kw+~!$%?';]qjj";
    int count = 0;

    for (int i=0; i<=strlen(str); i++)
    {
        if (isalpha(str[i]))
            count ++;
    }

    cout << "Number of alphabet characters:" << count << endl;
    cout << "Number of non alphabet characters:" << strlen(str)-count << endl;

    return 0;
}