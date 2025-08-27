#include<iostream>
using namespace std;




int func()
{
    int *ptr=new int;
    *ptr=880;
    cout<<"\n ptr is pointing to:"<<*ptr;

    return ptr;
}

int main()
{
    int *x=func();
    cout<<"\n value="<<*x<<endl;
    return 0;
}