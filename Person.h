#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person {
 private:
  string Name;
  int Salary;

 public:
  Person(int mySalary, string myName);
  void setName(string name);
  void setSalary(int age);
  string getName();
  int getSalary();
};
#endif