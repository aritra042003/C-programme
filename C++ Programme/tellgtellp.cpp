#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // ifstream fin;
    // char ch;
    // fin.open("file.txt");
    // int pos;
    // pos = fin.tellg();
    // cout << pos << endl;
    // fin >> ch;
    // pos = fin.tellg();
    // cout << pos;

    ofstream fout;
    char ch;
    fout.open("file.txt", ios::app);
    int pos;
    pos = fout.tellp();
    cout << pos;
    fout << "mysirg";
    pos = fout.tellp();
    cout << pos;
    fout.close();
}