#include<iostream>
using namespace std;


void armstrong(int n)
{
    int c=0,r=0;
    while(n!=0)
    {
      
        r=n%10;
        c=c+(r*r*r);
        n=n/10;

    }
    cout<<c;
}


int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    armstrong(n);
    return 0;
}