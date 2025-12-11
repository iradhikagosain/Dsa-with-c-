#include<iostream>
using namespace std;


int Decrease(int n)
{
    if(n==1)
    {
        return 1;
    }
    cout<<n<<"\t";
    return Decrease(n-1);
}

int main()
{
    int ans=Decrease(100);
    cout<<ans;

    return 0;
}