#include <cmath>
#include <iostream>
using namespace std;

double sum_even(double array[], int n) {
  double sum = 0.0;
  if (n < 1) {
    return 0.0;
  }
  for (int i = 0; i < n; i++) {
    if (fmod(i, 2) == 0) {
      sum += array[i];
    }
  }
  return sum;
}