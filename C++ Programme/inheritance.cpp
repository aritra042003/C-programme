#include <iostream>
using namespace std;
class A
{
private:
    int a;

protected:
    void setValue(int k)
    {
        a = k;
    }
};
class B : public A
{
public:
    void setData(int x)
    {
        setValue(x);
    }
};

int main()
{
    B obj;
    obj.setData(4);
}