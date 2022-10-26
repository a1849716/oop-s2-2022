#include "Employee.h"
#include "Casual.h"
#include <iostream>
using namespace std;

int main(){
  Casual casual(20);
  casual.work(60);
  casual.endWorkDay();
  cout << casual.get_dayCount() << endl;
}