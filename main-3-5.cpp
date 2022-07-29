#include <iostream>
using namespace std;

extern double sum_even(double array[], int n);

int main() {
  double arr[5] = {10,2,3,4,10};
  cout << sum_even(arr, 5)<<endl;
}