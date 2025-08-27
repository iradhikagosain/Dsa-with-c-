#include<iostream>
using namespace std;




//BRUTE FORCE
int  searchMatrix(int matrix[4][4],int n,int key)
{
    
    int valc=0;
    int valr=0;

    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n;col++)
        {
            if(key==matrix[row][col])
            {
               valr=row;
               valc=col;
            }
            else
            {
                continue;
            }
        }

    }
  cout<<"\nthe key is present at "<<valr<<","<<valc;

}



bool searchMatrix(int matrix[4][4], int n, int key)
{
    int row = 0;
    int col = n - 1;  

    while (row < n && col >= 0)
    {
        if (matrix[row][col] == key)
        {
            cout << "Key found at (" << row << ", " << col << ")" << endl;
            return true;
        }
        else if (matrix[row][col] > key)
        {
            col--; // Move left
        }
        else
        {
            row++; // Move down
        }
    }

    cout << "Key not found." << endl;
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
   
    searchMatrix(matrix,4,33);
    
    

    return 0;

}