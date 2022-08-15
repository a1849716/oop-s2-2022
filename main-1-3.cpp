#include<iostream>
using namespace std;

extern void copy_integers(int old_array[],int new_array[],int length);

int main(){
  int length = 5;
  int arr[5] = {-1,-1,-1,-1,-1};
  int new_arr[5];
  copy_integers(arr, new_arr, length);
}