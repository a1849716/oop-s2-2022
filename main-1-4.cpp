#include <iostream>
using namespace std;

extern void print_scaled(int array[3][3],int scale);

int main(){
  int scale = 3;
  int arr[3][3] = {
    {1,2,3},
    {1,2,3},
    {1,2,3}
  };
  print_scaled(arr, scale);
}