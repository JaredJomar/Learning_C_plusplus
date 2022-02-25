#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x = 1;
    switch (x + 1)
    {
    case 1:
        cout << "cool \n";
        break;
    case 2:                     // x = 1 and 1 + 1 = 2 por lo que es switch da el resultado del case 2
        cout << "not cool \n";
        break;

    default:
        break;
    }
}