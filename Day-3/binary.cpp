#include<iostream>
using namespace std;

int binarySearch(int *arr,int n,int key){
    int start=0,end=n-1,mid;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }

    }
    return -1;

}


int main(){
    int arr[]={2,4,5,7,8,14,30,45,67,89,99,100};
    int n=sizeof(arr)/sizeof(int);
    int key=8;
    int index=binarySearch(arr,n,key);
    if(index==-1){
        cout<<"unsuccesfull search";
    }
    else{
        cout<<"key found at index:"<<index;
    }
    return 0;



}