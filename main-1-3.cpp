//function to add all integers in array
#include <iostream>
using namespace std;

extern int num_count(int[], int, int);

int main(){
  int array[6] = {2,3,6,8,2,1};
  cout << "The number "<< 2 <<" is repeated "<< num_count(array, 6, 2) << " times."<<endl;
  return 0;
}