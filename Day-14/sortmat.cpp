#include<iostream>
using namespace std;


bool sortMat(int matrix[][4],int n,int m,int key)
{
    int row=0,col=m-1;
    while(row<n && col>=0)
    {
        if(matrix[row][col]==key)
        {
            cout<<"\n value found at:"<<"("<<row<<","<<col<<")";
            return true;
        }
        else if(matrix[row][col]>key)
        {
            col--;
        }
        else
        {
            row++;
        }
    }
    cout<<"\n value not found!";
    return false;
}


int main()
{
     int matrix[4][4]={
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}
    };

    sortMat(matrix,4,4,33);

    return 0;
}