#include <iostream>
using namespace std;

/**
 * A very simple function that adds two input argument numbers together.
 * Returns the sum of the two arguments.
 */
int add(int lhs, int rhs) {
    return lhs + rhs;
}

int main(){
  if (add(1, 2) == 3) {
    cout << "Test passed!" << endl;
  }
  else{
    cout << "Test 1 Failed" << endl;
  }
  if (add(-1,5) == 4) {
    cout << "Test passed!" << endl;
  }
  else{
    cout << "Test 2 Failed" << endl;
  }
  if (add(-1, -2) == -3) {
    std::cout << "Test passed!" << std::endl;
  }
  else{
    cout << "Test 3 Failed" << endl;
  }
}