#include "Casual.h"

#include "Employee.h"

Casual::Casual() {
  for (int i = 0; i < 7; i++) {
    hoursWorked[i] = 0;
  }
  dayCount = 0;
  energyLevel = 100.0;
}

Casual::Casual(int hourlyRate) {
  for (int i = 0; i < 7; i++) {
    hoursWorked[i] = 0;
  }
  dayCount = 0;
  payRate = hourlyRate;
  energyLevel = 100.0;
}

int Casual::get_dayCount() { return dayCount; };

void Casual::set_dayCount(int day) { day = dayCount; };

void Casual::endWorkDay() {
  dayCount++;
  energyLevel = 100;
};

void Casual::work(int mins){
  if (energyLevel > 0){
    energyLevel -= mins * 0.5;
  }
  if (mins > 200 || energyLevel < 0){
    energyLevel = 0.0;
  }
  if (energyLevel < 0){
    energyLevel = 0.0;
  }
  if (dayCount < 4){
    hoursWorked[dayCount] = (mins/60) * 2;
    }
  else{
    hoursWorked[dayCount] = mins/60;
  }
};

float Casual::pay(){
  int totalHours = 0;
  for (int i = 0; i < 7; i++) {
    totalHours += hoursWorked[i];
    hoursWorked[i] = 0;
  }
  return totalHours * payRate;
}