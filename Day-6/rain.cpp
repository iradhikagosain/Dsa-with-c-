#include<iostream>
#include<climits>
using namespace std;



void trap(int *heights,int n){
    int leftMax[20000];
    leftMax[0]=heights[0];
    cout<<"left max array:";
    for(int i=1;i<n;i++)
    {
        leftMax[i]=max(leftMax[i-1],heights[i-1]);
        cout<<leftMax[i]<<",";
    }
    cout<<endl;

    cout<<"right max array:";
    int rightmax[20000];
    rightmax[n-1]=heights[n-1];
    for(int i=n-2;i>=0;i--)
    {
        rightmax[i]=max(rightmax[i+1],heights[i+1]);//as we are calculating reverse
        cout<<rightmax[i]<<",";
    }
    cout<<endl;

    cout<<"\n calculating trapped water:";
    int waterTrapped=0;
    for(int i=0;i<n;i++)
    {
       
        int currWater=min(leftMax[i],rightmax[i])-heights[i];
       if(currWater>0)
       {
        waterTrapped+=currWater;
       }
       
    }
    cout<<"\nTOTAL WATER TRAPPED:"<<waterTrapped;


}


int main(){
    int heights[7]={5,4,3,2,1};
    int n=sizeof(heights)/sizeof(int);
    trap(heights,n);

    return 0;
}