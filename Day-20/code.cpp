#include<iostream>
#include<string>
using namespace std;

bool closeStrings(string str1,string str2)
{
    if(str1.length()!=str2.length())
    {
        return false;
    }

    int n1=str1.length();
    int n2=str2.length();
    for(int i=0;i<n1-1;i++)
    {
        for(int j=0;j<n2-1;j++)
        {
            if(str1[i]==str2[j])
            {
                cout<<"\n str2 is rearrange form of str1";
                return true;
            }
            else
            {
                j++;
            }

        }
    }
    cout<<"\n cannot be rearrange";
    return false;
}





int main()
{
    string str1,str2;
    cout<<"\n enter string one:";
    getline(cin,str1);
    cout<<"\n enter string two:";
    getline(cin,str2);
    closeStrings(str1,str2);



    return 0;
}