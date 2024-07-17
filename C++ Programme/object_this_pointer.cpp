#include <iostream>
using namespace std;
class Box
{
private:
    int l, b, h;

public:
    void setDimension(int l, int b, int h)
    {
        this->l = l;
        this->b = l;
        this->h = h;
    }
    void showDimension()
    {
        cout << "\n l =" << l << " b =" << b << " h =" << h;
    }
};
int main()
{
    Box *p, smallBox;
    // p=&smallBox;
    // p->setDimension(12,10,5);
    // p->showDimension();
    smallBox.setDimension(12, 10, 5);
    smallBox.showDimension();
}