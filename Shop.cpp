#include "Employee.h"
#include "Shop.h"

Shop::Shop(){
  Employees[5];
};

Shop* Shop::createShop(int authority){
  if (authority != 10){
    return NULL;
  }
  else{
    Shop();
    return &Employees[0];
  }
};

void Shop::addEmployee(Employee* newEmployee){
  
};

Employee** Shop::get_employees(){
  return Employees;
};

int Shop::get_count(){return count;};