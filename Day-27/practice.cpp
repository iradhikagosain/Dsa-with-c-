#include<iostream>
using namespace std;

class User{
    int id;
    string password;
    public:
    string username;

    User(int id){
        cout<<"calling parameterized constructor!";
        this->id=id;
    }

    void setPassword(string passVal){
        password=passVal;
    }

    string getPassword(){
        return password;
    }
};

int main()
{
    User u1(101);
    u1.setPassword("hello123");
    cout<<u1.getPassword()<<endl;
    u1.username="radhika_pvt";
    cout<<"\n"<<u1.username;
    return 0;

}