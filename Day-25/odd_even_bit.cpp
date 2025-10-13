#include<iostream>
using namespace std;


void oddOrEven(int num)
{
    if(!(num & 1))
    {
        cout<<"EVEN NUMBER";
    }
    else
    {
        cout<<"\n ODD NUMBER";
    }
}



int main()
{
    oddOrEven(8);
    oddOrEven(7);
    return 0;

}