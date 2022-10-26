#include "Employee.h"
#include "Casual.h"
#include <iostream>
using namespace std;

int main(){
  Casual casual(20);
  casual.endWorkDay();
  casual.endWorkDay();
  casual.endWorkDay();
  casual.endWorkDay();
  casual.endWorkDay();
  cout<< casual.get_dayCount()<<endl;
  casual.work(180);
  cout << casual.pay() << endl;
}