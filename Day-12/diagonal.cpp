#include<iostream>
using namespace std;




int  diagonalSum(int matrix[3][3],int n)
{
    int pdSum=0;
    int sdSum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (i==j)
            {
                pdSum=pdSum+matrix[i][j];

            }
            else if(j==n-i-1)
            {
                sdSum=sdSum+matrix[i][j];
            }
        }
    }
    cout<<"primary diagonal sum:"<<pdSum;

    cout<<"\nsecondary diagonal sum:"<<sdSum;


    cout<<"\n TOTAL SUM:"<<pdSum+sdSum;

    return 0;
}

//optimized
int Sum(int matrix[4][4],int n)
{
    for(int i=0;i<n;i++)
    {
        sum+=matrix[i][i]//pd
        if(i!=n-i-1)
        {
            sum+=matrix[i][n-i-1];//sd
        }
    }
}



int main(){
    int matrix[4][4]={
                {1,2,3,4},
                {5,6,7,8},
                {9,10,11,12},
                {13,14,15,16}};


                diagonalSum(matrix,4);
     int matrix2[3][3]={
                {1,2,3},
                {5,6,7},
                {9,10,11}};
                
             diagonalSum(matrix2,3);

return 0;
}