#ifndef CASUAL_H
#define CASUAL_H

#include "Employee.h"

class Casual : public Employee {
 private:
  float hoursWorked[7];
  int dayCount;

 public:
  Casual();
  Casual(int payRate);
  void endWorkDay();  
  int get_dayCount();
  void set_dayCount(int day);
  void work(int mins);
  float pay();
};
#endif