#include "Person.h"
#include <string>
using namespace std;
// constructor
Person::Person(int mySalary, string myName) {
Name = myName;
Salary = mySalary;
}
Person::Person(){
  Salary = 0;
  Name = "";
}

void Person::setName(string name) { Name = name; }
string Person::getName() { return Name; }
void Person::setSalary(int salary) { Salary = salary; }
int Person::getSalary() { return Salary; }