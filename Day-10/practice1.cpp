//Sort array in descending order using insertion sort
#include<iostream>
using namespace std;


void print(char arr[], int n) {
    cout << "\nSorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Successful!!!!!";
}

void SortChar(char arr[],int n)
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

    print(arr,n);
}


int main()
{
    char arr[8]={'s','w','a','u','d','i','o','g'};
    SortChar(arr,8);
    return 0;
}