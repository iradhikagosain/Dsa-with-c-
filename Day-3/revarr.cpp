//reverse an array
#include<iostream>
using namespace std;

//with extra space

int main(){
    int arr1[5]={3,5,67,23,5};
    int arr2[5];
    for(int i=0;i<5;i++)
    {
        arr2[i]=arr1[4-i];
    }

    cout<<"displaying reverse array:";
    for(int i=0;i<5;i++)
    {
        cout<<arr2[i]<<endl;
    }
    
    return 0;
}


//without extra space
int main(){
int arr[]={34,5,6,2,56};
int n=sizeof(arr)/sizeof(int);
int start=0,end=n-1;

while(start<=end)
{
    int temp;
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
}
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<",";
}
return 0;

}