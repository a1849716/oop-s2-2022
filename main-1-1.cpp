#include <iostream>
#include <string>
using namespace std;

extern void string_2d_copy(std::string first[][2], std::string second[][2], int n);

int main(){
  string arr1[3][2] = {{"lmao", "lmao"},{"lmao", "lmao"},{"lmao", "lmao"}};
  string arr2[3][2];
  string_2d_copy(arr1,arr2,3);
}