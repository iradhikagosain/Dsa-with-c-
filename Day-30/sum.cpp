#include<iostream>
using namespace std;


int Sum(int n)
{
    if(n==1)
    {
        return 1;
    }

    return n+Sum(n-1);
}


int main()
{
    int ans=Sum(100);
    cout<<"sum:"<<ans;
    return 0;
}