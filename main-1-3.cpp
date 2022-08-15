#include<iostream>
using namespace std;

extern void copy_integers(int old_array[],int new_array[],int length);

int main(){
  int length = 5;
  int arr[5] = {1,2,3,4,5};
  int new_arr[10];
  copy_integers(arr, new_arr, length);
}