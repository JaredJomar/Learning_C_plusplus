#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x = 6;
    int x1 = 2;
    if (x < 7)
    {
        cout << " x is less than 7!"
             << endl;
        cout << " x is less than 7!"
             << endl;
        if (x1 < 3)
        {
            cout << "x is less than 3!"
                 << endl;
        }
    }
    /*
    int x2;
    cout << "Enter a number: \n";
    cin >> x2;
    if (x2 == 9)
    {
        cout << "This is my fav number"
             << endl;
    }
    else
    {
        cout << "This is not my fav number"
             << endl;
    }

    int x3;
    cout << "Enter a number: \n";
    cin >> x3;
    if (x3 == 9 || x3 == 10)
    {
        cout << "This is my fav number"
             << endl;
    }
    else if (x3 < 5)
    {
        cout << " x is less than 5!"
             << endl;
    }
    else if (x3 > 5)
    {
        cout << " x is greater than 5!"
             << endl;
    }
    else
    {
        cout << "This is not my fav number"
             << endl;
    }
    cout << "Run \n";
    */
    int x4;
    cout << "Enter a number: \n";
    cin >> x4;
    if (x4 > 10)
    {
        cout << "x larger than 10 \n";
    }
    else if (x4 >= 5)
    {
        cout << "x is between 5 and 10 \n";
    }
}
