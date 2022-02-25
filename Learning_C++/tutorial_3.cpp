#include <iostream>
using namespace std;

// Data Types:
// int = number without decimal point   Ej: 7, -7
// float = number with a decimal point  Ej: 7.0, -7.0
// double = number with a decimal point  Ej: 7.0, -7.0
// bool = true o false
// string = "   ", cualquier cosa que este dentro de las " "
#include <string>
// char = ' '; cualquier letra, número o simbolo dentro de ' '
// = single line comment
/*
Multi line
comment
*/

int main()
{
  /* int x = 2;
   double x1 = 2.7;
   string y = "Tim";
   cout << x << endl;
   cout << x1 << endl;
   cout << y << endl;
   */
  /* int x;
   x = 7;
   x = 8;               // reescribe el valor inicial de 7  y lo cambia a 8
   cout << x << endl;
   */
  int x, y;
  x = 7;
  x = 8; // reescribe el valor inicial de 7  y lo cambia a 8
  y = 4;
  x = y; // el valor de x es igual a y por lo que su valor ahora es 4
  cout << x << y << endl;
}