#include <iostream>
using namespace std;

void copy_doubles(double *old_array,double *new_array,int length) {
  double* ptr;
  for (int r = 0; r < length; r++) {
    ptr = old_array+r;
    *(new_array+r) = *ptr;
  }
}