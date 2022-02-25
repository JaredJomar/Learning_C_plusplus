#include <iostream>
#include <string>
using namespace std;
/*  Bool value: True of False
!   not/ negate / opuesto
&&  true && false are equal
||  or // si uno es cierto ambos lo son
*/
int main()
{
    cout << "True = 1 and False = 0" << endl;
    bool test = !true;
    cout << test << endl;
    bool test1 = !(1 < 2);
    cout << test1 << endl;
    bool test3 = true && false; //  ambos no son cierto por lo que no son iguales y el resultado es falso
    cout << test3 << endl;
    bool test4 = true || false; //  si uno es cierto ambos lo son
    cout << test4 << endl;
    bool test5 = true || true;
    cout << test5 << endl;
    bool test6 = !(false && true); //  false is no equal to true so it return false then with have a ! por lo que nos devuelve el opuesto
    cout << test6 << endl;
    bool test7 = (!false && !true); // !false = true !true = false son diferentes por lo que el resultado es falso
    cout << test7 << endl;
    bool test8 = !(!false || !true) && true;
    cout << test8 << endl;
    int x = 0;
    int y = 2;
    bool test9 = (x < y) || (y == x); //   0<2 true || y == x false // true || false = true
    cout << test9 << endl;
}