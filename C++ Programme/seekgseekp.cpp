#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // ifstream fin;
    // fin.open("file.txt");
    // cout << fin.tellg();
    // cout << "\n"
    //      << (char)fin.get();
    // cout << (char)fin.get();
    // cout << "\n"
    //      << fin.tellg();
    // fin.seekg(6);
    // cout << "\n"
    //      << fin.tellg();
    // cout << "\n"
    //      << (char)fin.get();
    // cout << "\n"
    //      << fin.tellg();
    // // fin.seekg(2, ios_base::cur);
    // // fin.seekg(2, ios_base::beg);
    // fin.seekg(-2, ios_base::end);
    // cout << "\n"
    //      << fin.tellg();
    // cout << "\n"
    //      << (char)fin.get();

    ofstream fout;
    fout.open("file.txt", ios::ate | ios::app);
    cout << fout.tellp()<<endl;
    fout.seekp(2,ios_base::beg);
    cout << fout.tellp();
    fout.close();
    


}