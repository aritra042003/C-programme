//--------------------Pair in STL-----------------------------
#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int age;

public:
    void setStudent(string s, int a)
    {
        name = s;
        age = a;
    }
    void showStudent()
    {
        cout << "\n Name : " << name;
        cout << "\n Age: " << age;
    }
};
int main()
{
    pair<string, int> p1;
    pair<string, string> p2;
    pair<string, float> p3;
    pair<string, student> p4;
    pair<int, student> p5;
    p1 = make_pair("Rahul", 16);
    p2 = make_pair("India", "New Delhi");
    p3 = make_pair("Drilling c++", 345.5f);
    student s1;
    s1.setStudent("Aishwarya", 19);
    p4 = make_pair(1, s1);
    cout << "pair 1" << endl;
    cout << p1.first << endl;
    cout << p1.second << endl;
    cout << "pair 2" << endl;
    cout << p2.first << endl;
    cout << p2.second << endl;
    cout << "pair 3" << endl;
    cout << p3.first << endl;
    cout << p3.second << endl;
    cout << "pair 4" << endl;
    cout << p4.first << endl;
    student s2 = p4.second;
    s2.showStudent();
}