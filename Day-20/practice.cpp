#include<iostream>
#include<string>
using namespace std;


int main()
{
    string input;
    cout<<"\n Enter a string:";
    getline(cin,input);
    int count=0;

    for(int i =0;i<=input.length();i++)
    {
        if(input[i]>=97 && input[i]<=122)
        {
            count++;
        }
        else
        {
            continue;
        }

    }

    cout<<"the total no. of lowercase letters in given string is:"<<count;


    return 0;
}