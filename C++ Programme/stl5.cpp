//--------------------List in STL-----------------------------
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l1{11, 22, 33};
    list<int>::iterator p1 = l1.begin();
    while (p1 != l1.end())
    {
        cout << *p1 << " ";
        p1++;
    }
    l1.pop_front();
    cout<<endl;
    list<int>::iterator p2 = l1.begin();

    while (p2 != l1.end())
    {
        cout << *p2 << " ";
        p2++;
    }
    // list<string> l2{"delhi", "dhaka"};
    // l2.push_back("bhopal");
    // l2.push_front("karachi");
    // list<int>::iterator p1 = l1.begin();
    // list<string>::iterator p2 = l2.begin();

    // while (p1 != l1.end())
    // {
    //     cout << *p1 << " ";
    //     p1++;
    // }
    // cout<<endl;
    // while (p2 != l2.end())
    // {
    //     cout << *p2 << " ";
    //     p2++;
    // }
    // cout<<endl;

    // cout << "total values in the list are :" << l1.size()<<endl;
    // cout << "total values in the list are :" << l2.size();
}