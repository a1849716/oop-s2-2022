#include "Employee.h"

Employee::Employee() {
  payRate = 0;
  energyLevel = 0.0;
};

Employee::Employee(int hourlyRate) { hourlyRate = payRate; };

void Employee::takeABreak(int mins) {
  if (payRate < 98) {
    energyLevel += 2;
  };
};

int Employee::get_payRate() { return payRate; };

float Employee::get_energyLevel() { return energyLevel; };

void Employee::set_payRate(int hourlyRate) { hourlyRate = payRate; };

void Employee::set_energyLevel(float newEnergyLevel) {
  newEnergyLevel = energyLevel;
};

void work(int mins){};

float pay(){};