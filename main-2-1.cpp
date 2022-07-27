#include<iostream>
using namespace std;

extern int min_element(int[], int);

int main(){
  int arr[6] = {6,66,56,32,55,7};
  cout << "the smallest number is: "<< min_element(arr, 6)<< endl;
  return 0;
}