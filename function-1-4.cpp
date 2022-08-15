#include <iostream>
using namespace std;

void copy_doubles(double *old_array,double *new_array,int length) {
  *new_array = *new double(length);

  for (int r = 0; r < length; r++) {
    *new_array = *(old_array+r);
    cout << *new_array;
    if (r != length - 1){
      cout << " ";
    }
    *new_array = *(new_array+r);
  }

  cout << endl;
}