#include <iostream>
using namespace std;
int main() {
  int *ptr, a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *b = new int[10];
  /* address of a[0] is assigned to ptr */
  ptr = &a[0];
  // I want to copy the values in a into b; since i've declared b
  // as a dynamically allocated array,
  // I can now do pointer magic!!
  b = ptr;
  cout << "Value of first element in b " << b[0] << endl;
  cout << "Value of second element in b " << b[1] << endl;
  a[1] = 42;
  cout << "Value of second element in b " << b[1] << endl;
  cout << "location of b " << &b[1] << " location of a " << &a[1] << endl;
  // the issuse with the code is that both arr b and arr a are accessing the
  // values at the same location, meaning that b did not copy the values of a
  // but instead is just accessing arr a's location, meaning that when you
  // change the value of a or b, its correspondent arr also changes value
  return 0;
}