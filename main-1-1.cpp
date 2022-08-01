#include <iostream>
using namespace std;

extern int sum_diagonal(int array[4][4]);


int main(){
  int arr[4][4] =
  {
  {2,2,3,4}, 
  {1,2,3,4}, 
  {1,2,4,4}, 
  {1,2,3,4}
  };
  cout << "the sum of the diagonal is: " << sum_diagonal(arr)<<endl;
}