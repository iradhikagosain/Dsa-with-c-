#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int print(int arr[],int n)
{
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<", ";
}
}


int bubbleSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
           if(arr[j]<arr[j+1])
           {
            swap(arr[j],arr[j+1]);
           }
        }
    }
    cout<<"BUBBLE SORT!"<<endl;
print(arr,n);

}

int selectionSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minIdx=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[minIdx])
            {
                swap(arr[j],arr[minIdx]);
            }
        }
    }
    cout<<"\nSELECTION SORT"<<endl;
    print(arr,n);
}




int insertionSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]<curr)
        {
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;
    }
    cout<<"\n INSERTION SORT"<<endl;
    print(arr,n);
}


void countSort(int arr[], int n)
{
    int freq[10000] = {0}; 
    int minVal = INT_MAX, maxVal = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        freq[arr[i]]++; 
        minVal = max(minVal, arr[i]);
        maxVal = min(maxVal, arr[i]);
    }
    for(int i = minVal, j = 0; i <= maxVal; i++)
    {
        while(freq[i] > 0)
        {
            arr[j++] = i;
            freq[i]--;
        }
    }
    cout<<"\n COUNT SORT"<<endl;
    print(arr, n);
}



int main()
{
    int arr[10]={3,6,2,1,8,7,4,5,3,1};
    bubbleSort(arr,10);
    selectionSort(arr,10);
    insertionSort(arr,10);
    countSort(arr,10);
    return 0;
}
