#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("myfile.dat");
    fout << "my name is \n Aritra";
    fout.close();
}