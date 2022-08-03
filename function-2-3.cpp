#include <iostream>

bool is_palindrome(int integers[], int length) {
  for (int i = 0; i < length / 2; i++) {
    if (integers[i] != integers[length - i - 1]) {
      return false;
    }
  }
  return true;
}

int sum_if_palindrome(int integers[], int length) {
  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum += integers[i];
  }
  return sum;
}

int sum_array_elements(int integers[], int length) {
  if (length < 1){
    return -1;
  }
  if (is_palindrome(integers, length) == false){
    return -2;
  }
  else{
    return (sum_if_palindrome(integers, length));
  }
}