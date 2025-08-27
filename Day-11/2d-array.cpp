#include<iostream>
using namespace std;
/*
int main(){
    int students[3][3]={{100,100,100},
{85,74,89},
{63,72,65}};

cout<<students[2][1];
return 0;
}
*/
int main(){
    int arr[3][4];
    int n=3,m=4;
    cout<<"\n Enter elements:";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    cout<<"\n";
    }

     cout<<"\n Display  elements:";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j];
        }
    cout<<"\n";
    }
    return 0;
}