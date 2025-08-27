#include<iostream>
using namespace std;



int transpose(int matrix[][3],int n,int m)
{


    int transpose[m][n]={{0}};

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            transpose[j][i]=matrix[i][j];
        }
    }


    cout<<"transposed matrix:";
    for(int i = 0; i < m; i++)
{
    cout << "{ ";
    for(int j = 0; j < n; j++)
    {
        cout << transpose[i][j] << " ";
    }
    cout << "}" << endl;
}

}



int main()
{
    int matrix[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    
    transpose(matrix,3,3);


    return 0;
}