#include <iostream>
using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
  int binary[30] = {1, 0, 1, 1, 0};
  cout << binary_to_int(binary, 5) << endl;
}