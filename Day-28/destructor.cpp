#include<iostream>
using namespace std;

class Car{
    public:
    string name;
    string color;
    int *mileage;

    Car(string name,string color){
        this->name=name;
        this->color=color;
        mileage=new int;
        *mileage=12;
    }

    ~Car()
    {
        cout<<"deleting.....";
    }
};



int main()
{
    Car c1("BMW","BLACK");
    cout<<"\n"<<c1.name;
     cout<<"\n"<<c1.color;
      cout<<"\n"<<*c1.mileage;
    return 0;
}