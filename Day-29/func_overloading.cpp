#include<iostream>
using namespace std;


class Print
{
    public:
    void show(int x)
    {
        cout<<"int value"<<x;

    }


     void show(string x)
    {
        cout<<"string value"<<x;
        
    }
};


int main()
{

    Print p;
    p.show(35);
    p.show("hello");
    return 0;
}