#include <iostream>
#include <string>
using namespace std;

/*
+ , suma
- , resta
/ , division
* , multiplicacion
++ , añade 1 al valor dado
-- , remueve 1 al valor dado
% , mod o modulo de operacion - te da el resultante de la division
*/

/*
C++ Orden de operaciones:
()
^ , exponentes
* multiplicacion  o / division , de izquierda a derecha
+ suma o resta , de izquierda a derecha
*/

/*
int main(){
    int x = 8;                                              // de define la primera int
    double y = 9;                                           // se define la segunda int
    int sum = x + y + 3;                                    // se suma ambas integrales + 3
    int rest = x - y;                                       // se restan las int
    int mult = x * y;                                       // se multiplica las int
    double div = x /y;                                      // se divide las int
    cout << "Suma: \n" << sum << endl;                      // se muestra el resultado de la suma
    cout << "Resta: \n" << rest << endl;                    // se muestra el resultado de la resta
    cout << "Multiplicacion: \n" << mult << endl;           // se muestra el resultado de la multiplicacion
    cout << "Division: \n" << div << endl;                  // se muestra el resultado de la division
                                                            // el resultado va a ser un float porque c++ lo considera mas importante un double que un int
}
*/
/*
int main(){
   float x = 8;
   x += 1;                 // x = 8 + 1 = 9
   cout << x;
}
*/

/*
int main(){
    float x = 8;
    int y = 4;
    x += y;                 // x = 8 + y = 12
    cout << x;
}
*/

// Mod Calculator only work with int not double
int main()
{
    int x = 8;
    int y = 5;
    cout << x % y; //  el 5 cabe en el 8 una vez
} //  5 * 1 = 5
  //  8 - 5 = 3