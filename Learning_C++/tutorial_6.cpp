#include <iostream>
#include <string>
using namespace std;

/*  Bool value: True of False
<   menor que
>   mayor que
<=  menor igual que
>=  mayor igual que
!=  no es igual
==  es igual
*/
int main()
{
    bool test = 1 > 2;
    cout << "True = 1 y False = 0" << endl;
    cout << "1 es menor que 2 por lo que el resultado es : \n"
         << test << "\n"
         << endl; // true = 1   and    false = 0
    bool test1 = 1 >= 1;
    cout << "1 es mayor igual que 1 por lo que el resultado es : \n"
         << test1 << "\n"
         << endl;
    bool test2 = 1 == 1;
    cout << "1 es igual que 1 por lo que el resultado es : \n"
         << test2 << "\n"
         << endl;
    bool test3 = 1 != 1;
    cout << "1 es diferente que 1 por lo que el resultado es : \n"
         << test3 << "\n"
         << endl;
    bool test4 = 'a' == 'A';
    cout << "a es igual a A por lo que el resultado es : \n"
         << test4 << "\n"
         << endl;
    bool test5 = 'a' < 'b';
    cout << "a es menor que b por lo que el resultado es : \n"
         << test5 << "\n"
         << endl;
    bool test6 = 'a' == 'B';
    cout << "a es igual que B por lo que el resultado es : \n"
         << test6 << "\n"
         << endl;
    bool test7 = "hello" == "hEllo";
    cout << "hello es igual a hEllo por lo que el resultado es : \n"
         << test7 << "\n"
         << endl;
    bool test8 = "hello" == "hello";
    cout << "hello es igual a hello por lo que el resultado es : \n"
         << test8 << "\n"
         << endl;
    bool test9 = "hello" != "hello "; // el resultado es cierto porque el segundo hello tiene un espacio
    cout << "hello es diferente a hello por lo que el resultado es : \n"
         << test9 << "\n"
         << endl;
    int num1, num2;
    cout << "Type a number: " << endl; // bool con datos entrados por uno mismo
    cin >> num1;
    cout << "Type a second number" << endl;
    cin >> num2;
    cout << "Estos dos numeros son los mismos: \n"
         << (num1 == num2) << endl;
}