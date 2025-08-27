#include<iostream>
using namespace std;



int returnSeven(int matrix[2][3],int n,int m,int key)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]==key)
            {
                sum+=1;
            }
            else
            {
                continue;
            }
        }
    
    }
    cout<<"the total number of seven in the 2d array is:"<<sum;
}



int main()
{
    int matrix[2][3]={
        {4,7,8},
        {8,8,7}
    };

    returnSeven(matrix,2,3,7);
    return 0;
}