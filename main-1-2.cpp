#include <iostream>
#include <string>

#include "Person.h"
using namespace std;

int main() {
  Person p1(1900, "Richie");;
  cout << p1.getName() << " " << p1.getSalary() << endl;
}