#include<iostream>
using namespace std;

class Parent{
    public:
   virtual void show()
    {
        cout<<"parent class";
    }
};

class Child:public Parent{
    public:
    void show()
    {
        cout<<"child class";
    }

};

int main()
{
    Child c1;
    Parent *ptr;
    ptr=&c1;
    ptr->show();
    return 0;
}