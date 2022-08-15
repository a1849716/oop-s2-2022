#include<iostream>
using namespace std;

extern void copy_doubles(double *old_array,double *new_array,int length);

int main(){
  int length = 5;
  double arr[5] = {1.1, 1.2, 1.3, 1.4, 1.5};
  double new_arr[5];
  copy_doubles(arr, new_arr, length);
}