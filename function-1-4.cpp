#include <iostream>
using namespace std;

void copy_doubles(double *old_array,double *new_array,int length) {
  for (int r = 0; r < length; r++){
    *new_array = *(old_array+r);
    new_array = new_array+r;
  }
}