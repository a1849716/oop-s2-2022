#include <iostream>
using namespace std;

void print_ascending(int *vals, int len){
  int curr_num = *vals;
  cout <<  *vals << " ";
  for (int i = 1; i < len; i++){
    if (vals[i]>=curr_num){
      cout << vals[i] << " ";
    }
    else{
      break;
    }
    curr_num = *(vals + i);
  }
}
