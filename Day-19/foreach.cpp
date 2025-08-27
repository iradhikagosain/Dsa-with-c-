#include<iostream>
#include<string>
using namespace std;


int main()
{
    string str;
    getline(cin,str);


    /*for each loop*/
    for(char ch:str)
    {
        cout<<ch<<" ";
    }
    cout<<endl;
    return 0;
}