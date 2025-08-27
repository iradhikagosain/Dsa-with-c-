#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    /*char str[5]={'d','h','u','e','\0'};

        cout<<str<<endl;

        char work[]="helloworld";
        cout<<strlen(work)<<endl;
         cout<<work<<endl;
        char ch8[5]="code";
        cout<<ch8<<endl;
        char ch9[]={'2','f','h','g','\0'};
        cout<<ch9<<endl;
       return 0;


       */

       char word[10];

       cout<<"enter any string:";
       cin>>word;

       cout<<"\n your entered :"<<word;
       cout<<"\n your word length was:"<<strlen(word);


       cout<<"\n enter a string:";
       char sentence[100];
       cin.getline(sentence,100,'.');

       cout<<"\n your entered string:"<<sentence;
       cout<<"\n your string length was:"<<strlen(sentence);


       return 0;
}
