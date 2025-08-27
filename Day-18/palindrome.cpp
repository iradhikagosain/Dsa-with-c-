#include<iostream>
using namespace std;

int check(char word[], int n)
{
    int st=0;
    int end=n-1;
    while(st<end)
    {
        if(word[st]!=word[end])
        {
            cout<<"\n NOT A PALINDROME";
            return false;

        
        }
        st++;
        end--;
        
    }
    cout<<"\n  PALINDROME";
    return true;
}

int main()
{
    int n;
    cout<<"enter size of word:";
    cin>>n;
    char word[n];
    cout<<"\n enter word:";
    cin>>word;
    check(word,n);
    return 0;

}