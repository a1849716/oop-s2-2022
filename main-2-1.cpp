#include<iostream>
using namespace std;

extern void print_binary_str(string decimal_number);

int main(){
  char num[10] = "18";
  print_binary_str(num);
}