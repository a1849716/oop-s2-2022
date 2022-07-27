#include <iostream>
#include <stdlib.h>
using namespace std;

extern int array_sum(int[], int);

int main(){
  int array[6] = {2,3,6,8,2,1};
  cout << "The number is: " << array_sum(array, 6) << std::endl;
  return 0;
}