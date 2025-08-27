#include<iostream>
#include<cstring>
using namespace std;


int main()
{
    char str1[20];
    char str2[20];
    /*COPY*/
   strcpy(str1,"hello");
   cout<<str1<<endl;
   strcpy(str2,"world");
   strcpy(str1,str2);
   cout<<str1<<endl;


   /*concatenate*/
   char str3[20];
   char str4[20];
   strcpy(str3,"abc");
   strcpy(str4,"def");
   strcat(str3,str4);
    cout<<str3<<endl;
    cout<<str4<<endl;


   cout<<strcmp(str3,str4);
    
    return 0;
}