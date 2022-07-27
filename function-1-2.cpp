#include <iostream>
using namespace std;

double array_mean(int array[], int n){
  double mean = 0.0;
  for (int i = 0; i < n; i++){
    mean += array[i];
  } 
  mean = mean/n;
  if (n < 1){
    mean = 0.0;
  }
  
  return mean;
}