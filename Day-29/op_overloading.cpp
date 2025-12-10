#include<iostream>
using namespace std;


class Complex{
    private:
    int real;
    int img;

    public:
    Complex(int r,int i)
    {
        real=r;
        img=i;
    }

    void showNum()
    {
        cout<<real<<"+"<<img<<"i";
    }

    void operator +(Complex &c2)
    {
        int resReal=this->real+c2.real;
        int resImg=this->img+c2.img;
        Complex c3(resReal,resImg);
        cout << "res:";
        c3.showNum();


    }

};


int main()
{
    Complex c1(2,5);
    Complex c2(5,7);
    cout<<"\n";
    c1.showNum();
    cout<<"\n";
    c2.showNum();
     cout<<"\n";
     c1+c2;
    return 0;

}