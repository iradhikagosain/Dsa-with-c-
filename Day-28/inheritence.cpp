#include<iostream>
using namespace std;

class Animal{

    private:
    void reproduce(){
        cout<<"\nevery animal reproduce separatelyy!";
    }
    public:
    void eat(){
        cout<<"\n Every animal eatssssssssssssssss!";
    }
    protected:
    void breathe(){
        cout<<"\n basic need to live!!!!!!";
    }
};

class fish:public Animal{
    public:
    void swim()
    {
        cout<<"\n i can swim !";
    }
};

int main()
{
    fish f1;
    f1.eat();
    f1.swim();
    return 0;
}