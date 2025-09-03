#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;
    int f=0;
    int s=1;
    for(int i=2;i<=n;i++)
    {
     int t=f+s;
    cout<<t;
    f=s;
    s=t;

    }
    return 0;
}