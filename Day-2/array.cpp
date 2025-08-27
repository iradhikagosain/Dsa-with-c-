#include<iostream>
using namespace std;

int main(){
   int n;
   cout<<"\n enter sizze of array:";
   cin>>n;
   int arr[n];
   int i;
   cout<<"enter values :";
   for(i=0;i<=n;i++)
   {
    cin>>arr[i];
   }
   cout<<"\n see values:";
   for(i=0;i<=n;i++)
   {
    cout<<arr[i];
   }
   return 0;
}
