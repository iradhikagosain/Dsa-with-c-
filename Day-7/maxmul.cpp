/*You are given an integer array nums.
Find the contiguous subarray (containing at least one number) that has the largest product, and return the product.

The test cases are generated such that the answer will fit in a 32-bit signed integer.*/

#include<iostream>
#include<climits>
using namespace std;



int subarray(int *arr,int n)
{
    int maxmul=INT_MIN;
    for(int start=0;start<n;start++)
    {
        for(int end=start;end<n;end++)
        {
            int multiple=1;
          
            for(int i=start;i<=end;i++)
            {
                multiple=multiple*arr[i];
                cout << "Subarray [" << start << "..." << end << "] product: " << multiple << endl;

            }
            
             maxmul=max(maxmul,multiple);
        }
        cout<<endl;
    }
    cout<<"max multiplication of a subarray:"<<maxmul;

    return 0;

}

int main()
{
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"\n enter elements in array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    subarray(arr,n);
    return 0;
}