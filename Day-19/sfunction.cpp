#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str="radhika gosain";
    cout<<str.length()<<endl;
    cout<<str.at(3)<<endl;/*similar to str[3]*/
  cout<<str.substr(1,5)<<endl;
  cout<<str.find("i",6);


    return 0;
}
