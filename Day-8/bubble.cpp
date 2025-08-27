//BUBBLE SORT ALGORITHM

#include<iostream>
using namespace std;

int swap(int *arr,int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
       
        for(int j=0; j<n-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                
            }
        }

    }

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

    swap(arr,n);
    
    cout<<"\n SORTED  list....:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}