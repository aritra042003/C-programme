#include <iostream>
using namespace std;
template <class X>
class Arraylist
{
private:
    struct ControlBlock
    {
        X capacity;
        X *arr_ptr;
    };
    ControlBlock *s;

public:
    Arraylist(int capacity)
    {
        s = new ControlBlock;
        s->capacity = capacity;
        s->arr_ptr = new X[s->capacity];
    }
    void addElement(int index, X data)
    {
        if (index >= 0 && index <= s->capacity - 1)
        {
            s->arr_ptr[index] = data;
        }
        else
            cout << "\n Array index is not valid";
    }
    void viewElememnt(int index, X &data)
    {
        if (index >= 0 && index <= s->capacity - 1)
        {
            data = s->arr_ptr[index];
        }
        else
            cout << "\n Array index is not valid";
    }
    void viewList()
    {
        int i;
        for (i = 0; i < s->capacity; i++)
        {
            cout << " " << s->arr_ptr[i];
        }
    }
};
int main()
{
    int data;
    Arraylist<int> list1(4);
    list1.addElement(0, 32);
    list1.addElement(1, 21);
    list1.addElement(2, 19);
    list1.addElement(3, 1);

    list1.viewList();
    // list1.viewElememnt(0,data);
    // cout<<"value in the array is : "<<data;
}