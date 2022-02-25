#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "hello world!";
    str[1] = '2';   // Se cambia la letra [1] que en este caso es la e por un 2
    cout << str[1]; // Se puede aceder a cada letra como si fuera un array
    cout << str.length();

    for (int i = 0; i < str.length(); i++)
    {
        char chr = str[i];
        cout << chr
             << endl;
    }

    for (int i = 0; i < str.length(); i++)
    {
        str[i] = 'a';
    }
    cout << str;
}