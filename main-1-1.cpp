#include <iostream>
using namespace std;

extern void printer(int[10][10]);

int main(){
  int array[10][10] = {};
  printer(array);
}