#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"

class Manager : public Employee {
 protected:
  float hoursWorked;
  int daysWorked;

 public:
  Manager();
  Manager(int hourlyRate);
  void work(int mins);
  float pay();
};
#endif