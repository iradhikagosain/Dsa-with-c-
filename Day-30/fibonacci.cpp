#include<iostream>
using namespace std;


int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    //if(n==0 || n==1)
   // {
// return n;
  //  }

    return fib(n-1)+fib(n-2);
}

int main()
{
    int ans=fib(6);
    cout<<ans;

    return 0;
}