#include <iostream>
using namespace std;

int* matrix_min_max(int** vals, int num_rows, int num_cols) {
  int *min_max = new int[10];
  int min = vals[0][0];
  int max = vals[0][0];
  for (int r = 0; r < num_rows; r++) {
    for (int c = 0; c < num_cols; c++) {
      if (vals[r][c] <= min) {
        min = vals[r][c];
      }
      if (vals[r][c] >= max) {
        max = vals[r][c];
      }
    }
  } 
  min_max[0] = min;
  min_max[1] = max;
  return min_max;
}