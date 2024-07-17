
//--------------------Vector in STL-----------------------------
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1;
    cout << "current capacity is " << v1.capacity() << endl;
    for (int i = 0; i <= 9; i++)
        v1.push_back(10 * (i + 1));
    cout << "current capacity is " << v1.capacity() << endl;

    for (int i = 0; i < v1.size(); i++)
        cout << endl
             << v1[i];
    cout << "\n\n";
    vector<int>::iterator it = v1.begin();
    v1.insert(it + 3, 35);
    for (int i = 0; i < v1.size(); i++)
        cout << endl
             << v1[i];
}