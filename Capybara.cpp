#include "Capybara.h"
#include <string>
using namespace std;
// constructor
Capybara::Capybara() {
  Name = " ";
  Age = 0;
}

void Capybara::setName(string name) { Name = name; }
string Capybara::getName() { return Name; }
void Capybara::setAge(int age) { Age = age; }
int Capybara::getAge() { return Age; }