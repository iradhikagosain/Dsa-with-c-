//Given an integer arraynums,return true if any value appears atleast twice in the array,and return false if every element is distinct
#include<iostream>
using namespace std;

int checkNums(int *nums,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(nums[i]==nums[j])
            {
              sum=sum+1;
            }
            else
            {
                continue;

            }

        }



    }
    if(sum>0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

   
}

int main(){
    int n;
    cout<<"\n enter size of array:";
    cin>>n;
    cout<<"\n enter nums:";
    int nums[n];
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];

    }

    int result=checkNums(nums,n);
    if(result==1)
    {
        cout<<"\n true(duplicate elements)";
    }
    else
    {
        cout<<"\n false(no duplicate elements)";
    }
    return 0;
}