#include<iostream>
using namespace std;






int main()
{
    int n;
    cout<<"\n enter size of word:";
    cin>>n;
    char str[n];
    cout<<"\n Enter a word:";
    cin>>str;

    int start=0;
    int end=n-1;
    while(start<end)
    {
        swap(str[start],str[end]);
        start++;
        end--;
    }
    cout<<str<<endl;
    return 0;
}