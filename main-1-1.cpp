#include <iostream>
using namespace std;

extern void print_matrix(int array[10][10]);

int main(){
  int arr[10][10] = {};
  print_matrix(arr);
}