#include<iostream>
#include <climits> //for int min and max function
using namespace std;

int subarr(int *arr,int n){
   int maxsum=INT_MIN;

    cout<<"adding subarray:";
     for(int start=0;start<n;start++)
    {
        for(int end=start;end<n;end++){
           int sum=0;
            for(int i=start;i<=end;i++)//this loop is for values printing
            {
                sum+=arr[i];
            }
             cout<<sum<<",";
             maxsum=max(maxsum,sum);
        }
      cout<<endl;
       
    }
    cout<<"max sum of subarray:"<<maxsum;
      

    return 0;
    

}

int main(){
int n;
cout<<"enter size of array:";
cin>>n;
int arr[n];
cout<<"enter elements in array:";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
subarr(arr,n);
return 0;
}