#include<iostream>
using namespace std;

void counter(){
    static int count=0;
    count++;
    cout<<"count:"<<count<<endl;
}

class Example{
    public:
    static int x;
};

int Example :: x=0;

int main(){

    Example eg1;
    Example eg2;
    Example eg3;

    cout<<"\n"<<eg1.x++;
    cout<<"\n"<<eg2.x++;
    cout<<"\n"<<eg3.x++;

    counter();
    counter();
    counter();
    counter();
    
    return 0;
}