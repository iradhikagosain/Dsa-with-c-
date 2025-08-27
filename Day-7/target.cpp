/*
Question 2:

You are given an integer array 'nums' that is sorted in ascending order and contains distinct values.

Before being passed to your function, the array was possibly rotated at an unknown pivot index 'k' (1 <= k < nums.length), 
such that the resulting array is:
[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]

Example:
Original sorted array: [0, 1, 2, 4, 5, 6, 7]
After rotation at pivot index 3: [4, 5, 6, 7, 0, 1, 2]

Given the rotated array 'nums' and an integer 'target', your task is to return the index of 'target' in the array.

If the target is not found in the array, return -1.

Note:
- Do NOT rotate the array yourself.
- The array is already rotated and given to you.
- You have to find the index of the target efficiently.
*/

#include<iostream>
using namespace std;


int findTarget(int *arr,int n,int target)
{
    
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
         
        if(arr[start]<=arr[mid])
       {
        if(arr[start]<= target && target <arr[mid])
        {
            end=mid-1;

        }
        else{
            start=mid+1;
        }
       }
       else{
        if(arr[mid]<target && target<=arr[end])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
       }
    }
    return -1;
   
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
    int target;
    cout<<"\n enter the target:";
    cin>>target;

   int index= findTarget(arr,n,target);
   if(index==-1)
   {
    cout<<"unsuccesful serach";
   }
   else
   {
    cout<<"index is at:"<<index;
   }
   
}
