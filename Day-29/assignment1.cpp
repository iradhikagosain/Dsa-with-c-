#include<iostream>
using namespace std;

class bankAccount {

    int accNum;
    int bal;

public:

    bankAccount(int accNum, int bal)
    {
        this->accNum = accNum;
        this->bal = bal;
    }

    void deposit(int x)
    {
        bal = bal + x;
        cout << "Total balance is: " << bal << endl;
    }

    void withdraw(int y)
    {
        if (y > bal)
            cout << "Insufficient balance!" << endl;
        else
        {
            bal = bal - y;
            cout << "Remaining balance is: " << bal << endl;
        }
    }

    int getBalance()
    {
        return bal;
    }
};

int main()
{
    bankAccount a1(123456, 800);

    a1.deposit(100);
    a1.withdraw(100);

    cout << "Final Balance: " << a1.getBalance() << endl;

    return 0;
}
