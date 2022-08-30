#include <iostream>
#include <string>

#include "Capybara.h"
#include "Wagon.h"
using namespace std;

int main() {
  Capybara p1, p2, p3, p4, p5;
  Wagon wag1;
  p1.setName("Richie");
  p1.setAge(19);
  wag1.addCapybara(p1);
  p2.setName("An");
  p2.setAge(20);
  wag1.addCapybara(p2);
  p3.setName("Jun");
  p3.setAge(18);
  wag1.addCapybara(p3);
  p4.setName("Khush");
  p4.setAge(18);
  wag1.addCapybara(p4);
  p5.setName("Eddison");
  p5.setAge(5);
  wag1.addCapybara(p5);
  wag1.printCapybaras();
}