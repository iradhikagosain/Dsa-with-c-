#include<iostream>
#include<string>
using namespace std;


int tp(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    int ans1=tp(n-1);

    int ans2=tp(n-2);

    return ans1+ans2;
}

int main()
{
    cout<<tp(3);
    cout<<"\n"<<tp(4);

    return 0;
}