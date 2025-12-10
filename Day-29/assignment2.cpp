#include<iostream>
#include<string>
using namespace std;

class Parent {
public:
    string name;
    int age;

    Parent(string n, int a) {
        name = n;
        age = a;
    }
};

class Student : public Parent {
public:
    int studentId;

    Student(string n, int a, int id) : Parent(n, a) {
        studentId = id;
    }

    void displayStudentInfo() {
        cout << "Name: " << name 
             << "\nAge: " << age 
             << "\nStudent ID: " << studentId;
    }
};

int main() {
    Student s1("Radhika", 20, 101);
    s1.displayStudentInfo();
    return 0;
}
