#include <iostream>
using namespace std;

extern void multiples_of_seven(int *nums,int length);

int main(){
  int arr[5] = {7,14,2,3,49};
  int length = 5;
  int* ptr = &arr[0];
  multiples_of_seven(ptr, length);
}