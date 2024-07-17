#include <iostream>
using namespace std;
class A
{
public:
    void f1()
    {
        cout << "from class A";
    }
    void f2() {}
};
class B : public A
{
public:
    void f1()
    {
        cout << "from class B";
    } // Method overriding
    void f2(int x) {} // method hiding
};
int main()
{
    B obj;
    obj.f1(); // B
    obj.f2(4);
}