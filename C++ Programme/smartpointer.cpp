#include <iostream>
#include <memory>
using namespace std;
class B;
class A
{
public:
    weak_ptr<B> p1;
    void set_ptr(shared_ptr<B> &ptr1)
    {
        p1 = ptr1;
    }
    ~A() { cout << "Destructor-A"; }
};
class B
{
public:
    weak_ptr<A> p2;
    void set_ptr(shared_ptr<A> &ptr2)
    {
        p2 = ptr2;
    }
    ~B() { cout << "Destructor-B"; }
};
void f1()
{
    shared_ptr<A> objAptr(new A());
    shared_ptr<B> objBptr(new B());
    objAptr->set_ptr(objBptr);
    objBptr->set_ptr(objAptr);
}
int main()
{
    f1();
}