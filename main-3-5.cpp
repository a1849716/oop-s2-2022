#include <iostream>
using namespace std;

extern double sum_even(double array[], int n);

int main() {
  double arr[5] = {1, 2, 3, 4, 5};
  cout << sum_even(arr, 5)<<endl;
}