#include<iostream>
using namespace std;



void checkNum(int n)
{
    if(n>0)
    {
        cout<<"\n it is a positive number!";
      
    }
    else if(n<0)
    {
        cout<<"\n it is a negative number!";
       
    }
    else
    {
        cout<<"\n its a zero";
        
    }

}

void checkYear(int year)
{
    if(year%4==0)
    {
        cout<<"\n its a leap year";
    }
    else
    {
        cout<<"\n not a leap year!";
    }
}




int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    checkNum(n);

    int y;
    cout<<"\n enter year:";
    cin>>y;
    checkYear(y);
   
    return 0;




}