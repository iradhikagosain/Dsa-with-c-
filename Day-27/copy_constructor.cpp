#include<iostream>
#include<string>
using namespace std;

class Car {
    public:
    string name;
    string color;

    Car(string n, string c) {
        name = n;
        color = c;
    }

    Car(Car &original){
        cout<<"copying original data to another constructor!";
        name=original.name;
        color=original.color;
    }
};

int main() {
    Car c1("bmw","matty black");
    Car c2(c1);
    cout<<c2.name;
    cout<<c2.color;
    return 0;

}