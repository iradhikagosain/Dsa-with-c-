#include<iostream>
using namespace std;
//Largest number in array
int main()
{
    int marks[]={3,5,78,84,2,5,7,92,24,68,100,35,6,3,6,8,84,245,77};
    int max=marks[0];
    int i;
    for(i=1;i<=18;i++)
    {
        if(max<=marks[i])
        {
            max=marks[i];
        }
        else{
            continue;
        }
    }
    cout<<"largest number is:"<<max;
    return 0;


}