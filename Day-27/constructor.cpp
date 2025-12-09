#include<iostream>
#include<string>
using namespace std;

class Car{
    string name;
    string color;

    public:

    Car(string nameval,string colorval){
        cout<<"calling constructor";
        name=nameval;
        color=colorval;
    }

    void start(){
        cout<<"car has started..!";
    }

    void stop(){
        cout<<"car has stopped....!";
    }

    //getter
    string getName(){
        return name;
    }

    string getcolor(){
        return color;
    }
};



class Bike{
    string name;
    string color;

    public:

    Bike(string name,string color){
        cout<<"calling constructor";
        this->name=name;
        this->color=color;
    }

    void start(){
        cout<<"car has started..!";
    }

    void stop(){
        cout<<"car has stopped....!";
    }

    //getter
    string getName(){
        return name;
    }

    string getcolor(){
        return color;
    }
};



int main(){

    Bike c1("splender","red");
    cout<<"\n"<<c1.getName()<<endl;
    cout<<c1.getcolor();


    return 0;
}