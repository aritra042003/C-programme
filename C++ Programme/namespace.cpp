
#include <iostream>
using namespace std;
namespace Myspace
{
    int a;
    void f1();
    class A
    {
    public:
        void fun1();
    };
}
void Myspace::f1()
{
    cout << "Hello f1";
}
void Myspace::A::fun1()
{
    cout << "hello fun1";
}
using namespace Myspace;
int main()
{
    a = 5;
    f1();
    A obj;
    obj.fun1();
}