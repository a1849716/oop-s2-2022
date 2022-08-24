#include <iostream>
#include <string>
using namespace std;

extern string month_lookup(int month);

int main(){
  cout << month_lookup(2) << endl;
  cout << month_lookup(3) << endl;
  cout << month_lookup(13) << endl;
}