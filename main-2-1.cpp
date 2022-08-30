#include <iostream>
#include <string>
#include "Capybara.h"
#include "Wagon.h"
using namespace std;

int main() {
  Capybara p1, p2;
  Wagon wag1;
  p1.setName("Richie");
  p1.setAge(19);
  wag1.addCapybara(p1);
  p2.setName("An ");
  p2.setAge(20);
  wag1.addCapybara(p2);
  wag1.printCapybaras();
}