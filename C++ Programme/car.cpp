#include <iostream>
using namespace std;

class Array
{
private:
    int a[10];

public:
    void insert(int index, int value)
    {
        a[index] = value;
    }
};

class STACK : public Array
{
int top;
public:
  void push(int value){
    insert(top,value);
  }
};

 int main(){
    STACK s1;
    s1.push(34);
    s1.insert(2,56);
 }
// class Car
// {
// private:
//     int gear;

// public:
//     void incrementGear()
//     {
//         if (gear < 5)
//         {
//             gear++;
//         }
//     }
// };

// class SportsCar:public Car{

// };