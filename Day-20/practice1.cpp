#include <iostream>
#include <string>
using namespace std;

bool change(string str1)
{
    int n = str1.length();
    string str2 = str1; // initialize str2 with same size as str1

    for(int i = 0; i < n; i++)
    {
        if(str1[i] == 'a')
        {
            str2[i] = 'b';
        }
        else if(str1[i] == 'b')
        {
            str2[i] = 'a';
        }
        else
        {
            str2[i] = str1[i]; // keep other characters same
        }
    }

    cout << "\nChanged word is: " << str2;
    return true;
}

int main()
{
    string str1;
    cout << "Enter string one: ";
    getline(cin, str1);
    
    change(str1);
    return 0;
}
