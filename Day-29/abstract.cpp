#include<iostream>
using namespace std;

//abstract class
class Shape{
    public:
   virtual void draw()=0;
};

class Circle:public Shape{
    public:
    void draw(){
        cout<<"draw a circle!";
    }
};

class square:public Shape{
    public:
    void draw(){
        cout<<"draw a square!";
    }
};



int main(){

    Circle c1;
    c1.draw();
    square s1;
    s1.draw();
    Shape s;
    s.draw();
    return 0;

}