#include <iostream>
#include <string>

#include "Person.h"
using namespace std;

int main() {
  Person arr[4] = {};
  Person p1;
  p1.setName("Richie");
  p1.setSalary(19);
  arr[0] = p1;
  cout << p1.getName() << " " << p1.getSalary() << endl
       << arr[0].getSalary() << arr[0].getName() << endl;
}