#include<iostream>
using namespace std;

void update(int num,int i,int val)
{

    num=num & ~(1<<i);//clear bit
    num=num|(val<<i);
    cout<<num<<endl;
}

int main()
{
   
    update(7,2,0);
    return 0;
}