#include <iostream>
using namespace std;

extern int median_array(int[], int);

int main() {
  int arr[5] = {1, 2, 4, 6, 1};
  cout << endl <<median_array(arr, 5) << endl;
}