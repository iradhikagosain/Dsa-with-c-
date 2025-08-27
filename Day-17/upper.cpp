#include<iostream>
#include<cstring>
using namespace std;


int main()
{
   /* char word[40];
    cout<<"enter a word:";
    cin>>word;


    for(int i=0;i<strlen(word);i++)
    {
        cout<<word[i]<<endl;
    }

    for(int j=0;j<strlen(word);j++)
    {
        char ch=word[j];
        if(ch>='A'&& ch<='Z')
        {
            continue;
        }
        else
        {
            word[j]=ch-'a'+'A';
        }

        
    }
    cout<<word;*/
    char word[40];
     cout<<"enter a word:";
    cin>>word;


    for(int i=0;i<strlen(word);i++)
    {
        cout<<word[i]<<endl;
    }

    for(int j=0;j<strlen(word);j++)
    {
        char ch=word[j];
        if(ch>='a'&& ch<='z')
        {
            continue;
        }
        else
        {
            word[j]=ch+'a'-'A';
        }

        
    }
    cout<<word;
    


    return 0;
}