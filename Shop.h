#ifndef SHOP_H
#define SHOP_H
#include "Employee.h"

class Shop : public Employee{
  private:
  Employee ** Employee;
  int count;
  public:
  Shop();
  
};
#endif