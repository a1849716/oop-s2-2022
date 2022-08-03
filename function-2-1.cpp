//this function transforms numbers from decimal form to binary form

#include <iostream>
#include <string>
using namespace std;

void print_binary_str(string decimal_number) {
  int num = stoi(decimal_number);
  int count = 0;

  while (num > 0) {
    num = num / 2;
    count++;
  }

  int binary[count];

  int number = stoi(decimal_number);

  for (int i = 0; i < count; i++) {
    if (number % 2 != 0) {
      binary[i] = 1;
    } 
    else {
      binary[i] = 0;
    }
    number /= 2;
  }

  for (int i = count - 1; i >= 0; i--) {
    cout << binary[i];
  }
  cout << endl;
}