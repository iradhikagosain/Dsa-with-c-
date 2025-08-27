#include<iostream>
using namespace std;
/*


void changeA(int a){
    a=20;
    cout<<a<<"\n";
}
int main(){
    int a=10;
  
    int *ptr=&a;
    cout<<ptr<<"\n";
    cout<<*ptr;
    
    changeA(a);//by value
    cout<<a;
return 0;

}*/
/*
void changeA(int *ptr)
{
    *ptr=20;
    cout<<ptr<<"\n";
     cout<<*ptr<<"\n";


}
int main(){
    int a=10;
    changeA(&a);//by pointers

    cout<<a<<"\n";
    return 0;
    
}*/
void changeA(int &a)
{
    a=20;
     cout<<a<<"\n";


}
int main(){
    int a=10;
   
    changeA(a);
  
    cout<<a<<"\n";
    
    return 0;
}