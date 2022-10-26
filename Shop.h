#ifndef SHOP_H
#define SHOP_H
#include "Employee.h"

class Shop : public Employee{
  private:
  Employee ** Employees;
  int count;
  Shop();
  public:
  static Shop* createShop(int authority);
  void addEmployee(Employee* newEmployee);
  Employee** get_employees();
  int get_count();
};
#endif