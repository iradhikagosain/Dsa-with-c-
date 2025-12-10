#include<iostream>
using namespace std;

class Parent{

    public:
    void show()
    {
        cout<<"this is the function of parent class!";
    }
};

class Child:public Parent{
    public:
      void show()
    {
        cout<<"this is the function of child class!";
    }

};




int main()
{
    Child c1;
    c1.show();
    Parent p1;
    p1.show();
    return 0;
}