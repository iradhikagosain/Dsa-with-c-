#include<iostream>
using namespace std;

class Car{
    public:
    string name;
    string color;
    int *mileage;

    Car(string name,string color)
    {
        this->name=name;
        this->color=color;
        mileage=new int;//dynamic allocation
        *mileage=12;
    }

    Car(Car &original)
    {
        cout<<"copying.....";
        name=original.name;
        color=original.color;
        mileage=original.mileage;
    }

};
int main()
{
    Car c1("BMW","black");
    Car c2(c1);
    cout<<"\n"<<c1.name;
    cout<<"\n"<<c1.color;
    cout<<"\n"<<*(c1.mileage);
    cout<<"\n"<<c2.name;
    cout<<"\n"<<c2.color;
    cout<<"\n"<<*(c2.mileage);
    *c2.mileage=10;
    cout<<"\n"<<*(c1.mileage);

    return 0;
}