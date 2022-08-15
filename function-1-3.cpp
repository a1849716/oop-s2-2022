#include <iostream>
using namespace std;

void copy_integers(int old_array[], int new_array[], int length) {
  int* new_arr = new int(length);
  int* ptr;
  ptr = &old_array[0];
  for (int r = 0; r < length; r++) {
    new_arr[r] = *(ptr+r);
    cout << new_arr[r];
    if (r != length - 1){
      cout << " ";
    }
  }
  cout << endl;
}