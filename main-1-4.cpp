//function to add all integers in array
#include <iostream>
#include <stdlib.h>
using namespace std;

extern int sum_two_arrays(int[], int[], int);

int main(){
  int arr[6] = {2,3,6,8,2,1};
  int second_arr[6] = {1,2,3,4,5,6};
  cout << "The sum is: "<<sum_two_arrays(arr, second_arr, 6)<<endl;
  return 0;
}