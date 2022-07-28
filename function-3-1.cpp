#include <iostream>

bool is_fanarray(int array[], int n) {
  bool fan_arr = false;

  if (n < 1) {
    fan_arr = false;
  }

  for (int i = 0; i < (n + 1) / 2; i++) {
      if (array[i] == array[n-i-1]) {
        fan_arr = true;
      }
  }
  return fan_arr;
}