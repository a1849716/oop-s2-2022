#include<iostream>
using namespace std;

void print_pass_fail(char grade){
  switch (grade){
    case 'A': case 'B': case 'C':
      cout<<"Pass\n";
      break;
    case 'D': case 'E':
      cout << "Fail\n";
      break;
  }
}