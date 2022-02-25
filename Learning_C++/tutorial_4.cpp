#include <iostream>
#include <string>
using namespace std;

/*
int main() {
    //const int gravity = -9.8;     // const, es una constante en el código que no se puede reescribir
    int n;                          // un valor
    cin >> n;                       // entra en el terminal un valor n
    cout << n << endl;              // print valor n como int incluso si entraste un valor con decimales
}
*/

/*
int main() {
    //const int gravity = -9.8;                     // const, es una constante en el código que no se puede reescribir
    int n, x;                                       // un valor
    cout << "Input:\n";                            // \n es igual a endl va a la siguiente linea
    cin >> n;                                      // entra en el terminal un valor n
    cin >> x;
    cout << "Output:\n" << n << endl;              // print valor n como int incluso si entraste un valor con decimales
    cout << x << endl;
}
*/
/*
int main() {
    int n, x;
    cout << "Input" << endl;
    cin >> n;
    cout << cin.fail();                   // cin.fail, te permite ver cuando hubo un Input invalido
                                          // por ejemplo si escribes una letra o simbolo como input el output sera 1 ya que fue invalido
                                          // por el contrario si escribe un número como input el ouput sera de 0 ya que es valido
    cin.clear();                          // cin.clear, limpia la falla del terminal pero no remueve los datos entrados
    cin.ignore(1000, '\n');               // cin.ignore, ignora la cantidad de carateres que hayas puestos en este caso 1000 caracteres
    cin >> x;
    cout << x << endl;
}
*/

/*
// Simple Calculator
int main() {
    int num1, num2;                                              // define las dos int
    cout << "Enter First Number : ";                             // print
    cin >> num1;                                                 // entra primera int
    cin.clear();                                                 // cin.clear, limpia la falla del terminal pero no remueve los datos entrados
    cin.ignore(1000, '\n');                                      // cin.ignore, ignora la cantidad de carateres que hayas puestos en este caso 1000 caracteres
    cout << "Enter Second Number : ";                            // print
    cin >> num2;                                                 // entra segunda int
    int sum = num1 + num2;                                       // suma ambas int
    cout <<"La suma de los números es: " << sum << endl;         // muestra el resultado de la suma
}
*/

int main()
{
    string s; // define string como s
    cout << "Input a string:\n";
    cin >> s; // input a string
    cout << "Output string:\n"
         << s;
}