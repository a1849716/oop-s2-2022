#include<iostream>
using namespace std;

extern int count_evens(int);

int main(){
  cout << "The count is: "<<count_evens(6)<<endl;
  return 0;
}