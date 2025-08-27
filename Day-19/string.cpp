#include<iostream>
#include<string>
using namespace std;



int main()
{
    string str;
    getline(cin,str);
    str="world";/*cannot define in char array*/
    cout<<"\n"<<str;
    return 0;
}