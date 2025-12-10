#include<iostream>
using namespace std;

class A{
    string secret="data";
    friend class B;
    friend void reveal(A &obj);
};

class B{
    public:
    void showSecret(A &obj)
    {
        cout<<obj.secret<<endl;
    }
};

void reveal(A &obj)
{
    cout<<obj.secret<<endl;
}

int main()
{
    A a1;
    B b1;

    b1.showSecret(a1);
    reveal(a1);
    return 0;
}