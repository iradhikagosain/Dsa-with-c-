#include<iostream>
using namespace std;

void func(int arr[]){//passing array by reference by name
    arr[0]=189;

}
void func2(int *ptr){//passing array by pointer
    ptr[0]=189;

}
void printArr(int num[],int n){//pointing to same memory location
     int n=sizeof(arr)/sizeof(int);
     for(int i=0;i<=n;i++)
     {
        cout<<arr[i]<<endl;
     }

}


int main(){
    int a=5;
    int*ptr=&a;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    int arr[]={1,4,7,63,3};
    int n=sizeof(arr)/sizeof(int);
    cout<<arr<<endl;//array acting as pointer
    cout<<*arr<<endl;
    
    cout<<*ptr<<endl;

    return 0;

}