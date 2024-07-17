#include <iostream>
using namespace std;
class Account
{
private:
    int balance;      // instance member variable
    static float roi; // static  member variable/class variable

public:
    void setBalance(int b)
    {
        balance = b;
    }
    static void setRoi(float r)
    {
        roi = r;
    }
};
float Account::roi = 3.5f;
int main()
{
    Account a1;
    Account::setRoi(4.5f);
}