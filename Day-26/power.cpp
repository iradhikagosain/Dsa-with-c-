#include<iostream>
using namespace std;

bool chec_power(int num)
{
    if(!(num & (num-1)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout << "6: " << chec_power(6) << endl;
    cout << "7: " << chec_power(7) << endl;
    cout << "4: " << chec_power(4) << endl;
    cout << "101: " << chec_power(101) << endl;
    return 0;
}