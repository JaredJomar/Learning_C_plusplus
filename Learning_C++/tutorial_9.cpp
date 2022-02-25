#include <iostream>
#include <string>
using namespace std;

/*                          Array
Is a series of elements of the same type placed in contiguous memory
lolcations that can be individually referenced by adding an index to
a unique identifier.
*/

int main()
{
     //  Formas de definir un array
     int x = 5;
     int array[x] = {1, 2, 3, 4, 5};
     int array1[6] = {1, 2, 3, 4, 5, 6};
     int array2[] = {1, 2, 3, 4, 5, 6, 7};
     cout << "Array[0]: " << array[0]
          << endl
          << "Array[3]: " << array[3]
          << endl;
     array[1] = 10; // array[1] es 2 y se esta cambiando a 10
     cout << "Array[1]= 10: " << array[1]
          << endl;
     int x2 = 5;
     int array3[] = {4, 5, 6, 7};
     string array4[] = {"tim", "is", "great"};
     double array5[] = {1.1, 1.2, -0.9};
     cout << "Array3 size: " << sizeof(array3)
          << endl;
     cout << "Array3 size en [0}: " << sizeof(array3[0])
          << endl;
     cout << "Array3 size divide Array3[0]: " << sizeof(array3) / sizeof(array3[0])
          << endl;
}