#include<iostream>
using namespace std;

class Student{

    string name;
    float cgpa;

    void getPercentage(){
        cout<<(cgpa*10)<<"%\n";
    }

};

class User{
    string password;
    public:
    int id;
    string username;
    string bio;

    void deactivate()
    {
        cout<<"deactivating... account";
    }

    void editBio(string newBio)
    {
        bio=newBio;
    }
};


int main()
{
    Student s1;
    cout<<sizeof(s1);
    User u1;
    u1.username="radhika";
    cout<<u1.username<<endl;
    //u1.password="123";
    //cout<<u1.password<<endl;
    u1.deactivate();
    
    return 0;
}