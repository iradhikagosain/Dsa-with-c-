//KADANES ALGORITHM (DP)
#include<iostream>
#include<climits>
using namespace std;

int kadane(int *arr,int n){
    int currsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        currsum+=arr[i];
        maxsum=max(maxsum,currsum);
        if(currsum<0)
        {
            currsum=0;
        }
    }
    cout<<"max subarray sum:"<<maxsum;
}
int main()
{
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"\n enter elements in array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    kadane(arr,n);
    return 0;

}

