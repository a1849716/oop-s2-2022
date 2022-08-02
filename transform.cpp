#include <iostream>
using namespace std;

int main(){
  int num = 1001;
  for (int i = 0; i< 4; i++){
    cout << num <<endl;
    num /= 10;
  }
}