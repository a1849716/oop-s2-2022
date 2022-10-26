#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee{
  protected:
    int payRate;
    float energyLevel;
  public:
    Employee();
    Employee(int hourlyRate);
    void takeABreak(int mins);
    int get_payRate();
    float get_energyLevel();
    void set_payRate(int hourlyRate);
    void set_energyLevel(float newEnergyLevel);
    virtual void work(int mins);
    virtual float pay();
};
#endif