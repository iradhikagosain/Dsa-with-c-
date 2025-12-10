#include<iostream>
using namespace std;

class Example{
    public:
    Example(){
        cout<<"constructor..\n";
    }

    ~Example(){
        cout<<"Destructor..\n";
    }
};


int main()
{
    int a=0;
    if(a==0)
    {
       static Example eg1; 
    }
    cout<<"\ncode ending";
    
    return 0;

}