#ifndef CAPYBARA_H
#define CAPYBARA_H
#include <string>
using namespace std;

class Capybara {
 private:
  string Name;
  int Age;

 public:
  Capybara();
  void setName(string name);
  void setAge(int age);
  string getName();
  int getAge();
};
#endif