#include <iostream>
using namespace std;

void multiples_of_seven(int *nums, int length) {
  for (int i = 0; i < length; i++) {
    if (*(nums + i) % 7 == 0) {
      cout << *(nums + i) << endl;
    }
  }
}