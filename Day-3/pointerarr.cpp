#include<iostream>
using namespace std;

//ARRAY POINTER and pointer operations

 
int main()
 {
    //array pointer is constant
    int arr[5];
   
    int y=43;
    arr=&y;
    cout<<arr<<"\n";

    return 0;


 }

int main()
 {
    //inc and dec
    int a=34;
    int *ptr=&a;
    cout<<ptr<<"\n";
    ptr--;
    cout<<ptr<<"\n";
    ptr--;
    cout<<ptr<<"\n";
    ptr--;
    cout<<ptr;
    return 0;

 }

 
int main()
 {
    //comparison
    int a=34;
    int *ptr1=&a;
    int *ptr2=ptr1+3;
    cout<<ptr2<<endl;
    cout<<ptr1<<endl;
    cout<<(ptr2<ptr1);
    return 0;
 }

 int main()
 {
    //add(invalid) and sub
    int a=34;
    int *ptr1=&a;
    int *ptr2=ptr1+3;
    cout<<ptr2<<endl;
    cout<<ptr1<<endl;
    cout<<ptr2-ptr1;
    return 0;
 }

 