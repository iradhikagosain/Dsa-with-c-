#include<iostream>
using namespace std;

int addRow(int nums[][3],int n,int m)
{
   int sum=0;
   int i=1;
   for(int j=0;j<m;j++)
   {
    sum=sum+nums[i][j];
   }
   cout<<"\n total sum of elements of 2nd row:"<<sum;
   return sum;

}


int main()
{
    int nums[3][3]={
        {1,4,9},
        {11,4,3},
        {2,2,3},
    };

    addRow(nums,3,3);
    return 0;


}