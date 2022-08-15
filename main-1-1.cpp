#include <iostream>
#include <string>
using namespace std;

extern void string_2d_copy(std::string first[][2], std::string second[][2], int n);

int main(){
  string arr1[5][2] = {{"1", "1"},{"2", "2"},{"3", "3"},{"4", "4"}, {"5", "5"}};
  string arr2[5][2];
  string_2d_copy(arr1,arr2,5);
}