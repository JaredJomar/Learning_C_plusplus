#include <iostream>
#include <string>
using namespace std;
// Alias - is a name that refers to a previously define type
//  References - a reference is a simpler reference datatype that is less powerful but safer than
//  the pointer type inherited from C

int main()
{
    int a = 2;
    int &b = a; // b is a refences of a
    int c = a;
    a = 4;
    cout << a
         << endl;
    cout << b
         << endl;
    cout << c
         << endl;
    cout << &a //  Memory location of a
         << endl;
    cout << &b //  Memory location of b
         << endl;
}