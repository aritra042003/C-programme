#include <iostream>
using namespace std;
int main()
{
    cout << "Wekcome";
    try
    {
        throw 10;
        cout << "\n in try";
    }
    catch (int e)
    {
        cout << "\n exception no :" << e<<endl;
    }
    cout << "last line";
}
