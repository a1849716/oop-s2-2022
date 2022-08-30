#include <iostream>
#include <string>

#include "Capybara.h"
using namespace std;

int main() {
  Capybara arr[4] = {};
  Capybara p1;
  p1.setName("Richie");
  p1.setAge(19);
  arr[0] = p1;
  cout << p1.getName() << " " << p1.getAge() << endl
       << arr[0].getAge() << arr[0].getName() << endl;
}