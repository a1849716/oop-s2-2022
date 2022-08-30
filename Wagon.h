#ifndef WAGON_H
#define WAGON_H
#include <string>
#include "Capybara.h"
using namespace std;

class Wagon : public Capybara{
 private:
  bool empty;
  int count;
  Capybara capyArr[4];
 public:
  // create an empty wagonobject
  Wagon();
  bool addCapybara(Capybara newCapy);
  void emptyWagon();
  void printCapybaras();
};
#endif