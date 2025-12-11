#include<iostream>
#include<cmath>
using namespace std;

int power(int x,int n)
{
    if(n==1)
    {
        return x;
    }
    return x*pow(x,n-1);

}



int main()
{
    cout<<power(3,5);
    return 0;
}