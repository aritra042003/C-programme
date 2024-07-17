#include <iostream>
using namespace std;
class B;
class A
{
private:
    int a;

public:
    friend void fun(A, B);
    void setData(int x)
    {
        a = x;
    }
};

class B
{
private:
    int b;

public:
    friend void fun(A, B);
    void setData(int y)
    {
        b = y;
    }
};
void fun(A o1, B o2)
{
    cout << "sum is " << o1.a + o2.b;
}
int main()
{
    A obj1;
    B obj2;
    obj1.setData(2);
    obj2.setData(3);
    fun(obj1, obj2);
}