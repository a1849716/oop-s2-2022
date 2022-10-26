#include "Manager.h"

#include "Employee.h"

Manager::Manager() {
  payRate = 0;
  hoursWorked = 0;
  daysWorked = 0;
};

Manager::Manager(int hourlyRate) {
  payRate = hourlyRate;
  hoursWorked = 0;
  daysWorked = 0;
};

void Manager::work(int mins) {
  if (mins < 480) {
    hoursWorked = mins / 60;
    if (energyLevel > 0) {
      energyLevel -= mins * 0.25;
    }
  } else if (mins > 480) {
    daysWorked++;
    hoursWorked = 0;
  }
};

float Manager::pay() {
  float payed = daysWorked * (payRate * 8);
  daysWorked = 0;
  hoursWorked = 0;
  return payed;
};
