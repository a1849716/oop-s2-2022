#include <iostream>
using namespace std;

int median_array(int array[], int n) {
  if (n < 1 || n % 2 == 0) {
    return 0;
  }

  int temp = 0;
  int median = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i+1; j < n; j++) {
      if (array[j] < array[i]) {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
  median = array[(n)/2];
  return median;
}