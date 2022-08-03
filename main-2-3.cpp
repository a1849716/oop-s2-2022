#include <iostream>
using namespace std;

extern int sum_array_elements(int integers[], int length);

int main() {
  int arr[5] = {1, 2, 3, 2, 1};
  cout << sum_array_elements(arr, 0) << endl;
}