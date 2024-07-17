#include <iostream>
using namespace std;
//Shallow and Deep Copy
class Dummy
{
private:
    int a, b;
    int *p;

public:
    void setData(int x, int y, int z)
    {
        a = x;
        b = y;
        *p = z;
    }
    void showData()
    {
        cout << "\n a: " << a << "\n b: " << b << "\n z" << *p;
    }
    Dummy()
    {
        p = new int;
    };
    Dummy(Dummy &d)
    {
        a = d.a;
        b = d.b;
        p = new int;
        *p = *(d.p);
    }
    ~Dummy()
    {
        delete p;
    }
};
int main()
{
    Dummy d1;
    d1.setData(3, 4, 5);
    Dummy d2 = d1; // copy constrcutor
                   //  d2 = d1;       // implicit copy assignment operator
    d2.showData();
}