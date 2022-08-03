#include <cmath>

int binary_to_int(int binary_digits[], int number_of_digits){
  int sum = 0;
  for (int i = number_of_digits - 1; i >= 0; i-- ){
    if (binary_digits[i] == 1){
      sum += pow(2, number_of_digits-i-1);
    }
  }
  return sum;
}