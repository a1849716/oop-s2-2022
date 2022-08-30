#include "Person.h"
#include <string>
using namespace std;
// constructor
Person::Person() {
  Name = " ";
  Salary = 0;
}

void Person::setName(string name) { Name = name; }
string Person::getName() { return Name; }
void Person::setSalary(int salary) { Salary = salary; }
int Person::getSalary() { return Salary; }