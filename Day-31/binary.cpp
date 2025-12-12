#include<iostream>
#include<string>
using namespace std;


void bin(int n ,int lplace,string ans)
{

    if(n==0)
    {
        cout<<ans;
        return;
    }


    if(lplace!=1)
    {
        bin(n-1,0,ans+'0');
        bin(n-1,1,ans+'1');

    }
    else
    {
        bin(n-1,0,ans+'0');
    }
}

int main()
{
    string ans="";
    bin(3,0,ans);
    return 0;
}