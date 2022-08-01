#include <iostream>
using namespace std;

void print_summed(int array1[3][3],int array2[3][3]){
    for (int r = 0; r < 3; r++) {
    for (int c = 0; c < 3; c++) {
      array1[r][c] += array2[r][c];
      if (c == 2) {
        cout << array1[r][c];
      } else {
        cout << array1[r][c] << " ";
      }
    }
    cout << "\n";
  }
}