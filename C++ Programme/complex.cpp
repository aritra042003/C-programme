#include <iostream>
using namespace std;
class Complex
{
private:
    int a, b;

public:
    Complex() // default constructor
    {
        // cout << "hello constructor for new object";
    }
    ~Complex()
    {
        // cout << "i am a destructor";
    }

    Complex(int x, int y) // parametarized constructor
    {
        a = x;
        b = y;
    }
    Complex(int k)
    {
        a = k;
    }
    void set_data(int x, int y)
    {
        a = x;
        b = y;
    }
    void show_data()
    {
        cout << "\n a=" << a << " b=" << b;
    }
    // Complex operator+(Complex c)
    // {
    //     Complex temp;
    //     temp.a = a + c.a;
    //     temp.b = b + c.b;
    //     return (temp);
    // }
    // Complex operator-()
    // {
    //     Complex temp;
    //     temp.a = -a;
    //     temp.b = -b;
    //     return temp;
    // }
    Complex(Complex &c)
    {
        a = c.a;
        b = c.b;
    }
    friend void func(Complex c);
    friend Complex operator+(Complex, Complex); // Binary operator as a friend
    friend Complex operator-(Complex);          // Unary operator as a friend
    friend ostream &operator<<(ostream &, Complex);
    friend istream &operator>>(istream &, Complex &);
};

//Overloading of extraction operator
istream &operator>>(istream &din, Complex &C)
{
    cin >> C.a >> C.b;
    return (din);
}
//Overloading of insertion  operator
ostream &operator<<(ostream &dout, Complex C)
{
    cout << "\n a=" << C.a << " b " << C.b;
    return (dout);
}
Complex operator+(Complex X, Complex Y)
{
    Complex temp;
    temp.a = X.a + Y.a;
    temp.b = X.b + Y.b;
    return (temp);
}
Complex operator-(Complex X)
{
    Complex temp;
    temp.a = -X.a;
    temp.b = -X.b;
    return temp;
}

void func(Complex c)
{
    cout << "sum is : " << c.a + c.b;
}

void fun()
{
    Complex obj;
}
int main()
{
    Complex c1;
    cout << "enter a complex number ";
    cin >> c1;//operator<<(cout,c1);
    cout << "you entered : ";
    cout << c1;
    // fun();
    // Complex c1, c2, c3;
    // Complex c4(c1);
    // c1.set_data(3, 4);
    // func(c1);
    // c2 = c1.operator-();
    // c2 = -c1; // unary operator
    // c2.show_data();
    // c2.set_data(5, 6);
    //  c3=c1.operator+(c2);
    // c3 = c1 + c2;//Binary operator
    // c3 = c1.add(c2);
    // c3.show_data();
}