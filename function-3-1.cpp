#include <iostream>

bool is_fanarray(int array[], int n) {
  bool fan_arr = false;

  if (n < 1) {
    fan_arr = false;
  }
  std::cout << n/2<< std::endl;
  
  for (int i = 0; i < n / 2; i++) {
    for (int j = n / 2; j > -1; j--) {
      if (array[i] != array[j]) {
        fan_arr = false;
        break;
      }
      else{
        fan_arr = true;
      }
    }
  }
  return fan_arr;
}