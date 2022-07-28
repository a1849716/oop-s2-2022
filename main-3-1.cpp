#include <iostream>
using namespace std;

extern bool is_fanarray(int[], int);

int main() {
  int arr[5] = {1, 2, 3, 2, 1};
  cout << is_fanarray(arr, 5) << endl;
}