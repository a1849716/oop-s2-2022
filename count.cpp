#include <iostream>
using namespace std;

//initiatising 
int count(int array[], int n){
  int count = 0 ;
  for (int i = 0; i < n; i++){
    if (array[i] % 2 == 0){
      count++;
    }
  }
  return count;
}

int main() {
    int array[5] = {4,5,6,7,8};
    cout << "The number is: " << count(array, 5) << std::endl;
    return 0;
}