#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
    string name;
    float cgpa;
    public:
    void getPercentage(){
        cout<<cgpa*10<<"%\n";
    }

    //setters
    void setName(string nameval){
        name=nameval;
    }

    void setcgpa(float cgpaval){
        cgpa=cgpaval;
    }

    //getters
    string getName(){
        return name;
    }

    float getcgpa(){
        return cgpa;
    }
};



int main()
{

    Student s1;
    s1.setName("radhika");
    s1.setcgpa(9.0);
    cout<<s1.getName()<<"\n";
    cout<<s1.getcgpa();
    return 0;
}