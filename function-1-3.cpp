#include <iostream>
using namespace std;

void copy_integers(int old_array[], int new_array[], int length) {
  new_array = new int(length);
  int* ptr;
  ptr = &old_array[0];
  for (int r = 0; r < length; r++) {
    new_array[r] = *(ptr+r);
    cout << new_array[r];
    if (r != length - 1){
      cout << " ";
    }
  }
  cout << endl;
}