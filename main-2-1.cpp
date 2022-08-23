#include <iostream>
using namespace std;

extern int *readNumbers();
extern void hexDigits(int *numbers,int length);

int main(){
  int* num = readNumbers();
  hexDigits(num, 10);

}