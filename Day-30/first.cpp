#include<iostream>
#include<vector>
using namespace std;


int foccur(vector<int>arr,int i,int target)
{
    if(i==arr.size())
    {
        return -1;
    }


    if(arr[i]==target)
    {
        return i;
    }


    return foccur(arr,i+1,target);
}

int loccur(vector<int>arr,int i,int target)
{
     if(i==arr.size())
    {
        return -1;
    }

    int idx=loccur(arr,i+1,target);
    if(idx==-1 && arr[i]==target)
    {
            return i;
    }

    return idx;

}

int main()
{

    vector<int>arr={1,2,3,3,3,4,5};
    cout<<foccur(arr,0,3);
    cout<<"\n";
    cout<<loccur(arr,0,3);

    return 0;
}