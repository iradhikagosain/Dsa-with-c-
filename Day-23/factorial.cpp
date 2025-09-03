#include<iostream>
using namespace std;


int factorial(int n)
{
    int total=1;
    for(int i=1;i<=n;i++)
    {
     total=total*i;
    }
    return total;
}



int main()
{
    int n;
    cout<<"\n enter num:";
    cin>>n;
    int ans=factorial(n);
    cout<<ans;
    return 0;
}