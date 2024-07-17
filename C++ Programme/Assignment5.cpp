#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
    int c;
    c = x;
    x = y;
    y = c;
}
// int main()
// {
//     int a = 4, b = 3;
//     cout << a << " " << b<<endl;
//     swap(a, b);
//     cout << a << " " << b;
// }
void add(int a, int b, int c = 0)
{
    cout << "sum is : " << a + b + c;
}
// int main()
// {
//     add(2, 3);
//     cout << endl;
//     add(2, 3, 4);
// }

float Area(int a)
{
    return 3.14 * a * a;
}
float Area(int a, int b)
{
    return a * b;
}
float Area(float a, int b, int c)
{
    return a * b * c;
}
// int main()
// {
//     float p = Area(3);
//     float q = Area(2, 4);
//     float r = Area(0.5, 2, 4);
//     cout << p << " " << q << " " << r;
// }
void max(int a,int b){
if(a>b)
cout<<"max is : "<<a;
else
cout<<"max is : "<<b;
}

void max(double a,double b){
if(a>b)
cout<<"max is : "<<a;
else
cout<<"max is : "<<b;
}

int main(){
    max(2,3);
}