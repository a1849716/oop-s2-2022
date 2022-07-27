//this finds the mean of the arrays
#include <iostream>
#include <stdlib.h>
#include<iomanip>
using namespace std;

extern double array_mean(int[], int);

int main(){
  int array[6] = {1,2,3,4,5,6};
  cout <<setprecision(1) << fixed;
  cout << "The mean of the numbers are: " << array_mean(array, 6) << endl;
  return 0;
}