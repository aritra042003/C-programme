#include <iostream>
using namespace std;

class Person
{
public:
    virtual void fun() = 0; // pure virtual function or do nothing function
    void f1()
    {
    }
};

class Student : public Person
{
public:
    void fun()
    {
    }
};
int main()
{
}