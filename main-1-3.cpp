#include <iostream>
using namespace std;

extern void count_digits(int array[4][4]);

int main() {
  int arr[4][4] = 
  {
    {1,1,1,1},
    {4,4,4,4},
    {5,5,5,5},
    {0,0,0,0},
  };
  count_digits(arr);
}