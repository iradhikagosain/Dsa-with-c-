#include<iostream>
using namespace std;


void print(int arr[], int n) {
    cout << "\nSorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
     cout<<"successfull!!!!!";
}

void insertionSort(int arr[],int n)
{
    for( int i=1;i<n;i++)
    {
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr)
        {
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;
    }
    print(arr,n);
}


int main()
{
    int arr[10]={9,11,4,6,2,90,5,33,1,8};
    insertionSort(arr,10);
    return 0;
}