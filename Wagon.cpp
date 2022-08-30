#include "Wagon.h"
#include "Capybara.h"
#include <iostream>
#include <string>
using namespace std;

// constructor
Wagon::Wagon() {
  count = 0;
  empty = true;
  capyArr[4];
}

bool Wagon::addCapybara(Capybara newCapy) {
  if (count >= 3) {
    empty = false;
  } else {
    capyArr[count] = newCapy;
  }
  count++;
  return empty;
}
// remove all Capybaras from the wagon
void Wagon::emptyWagon() {
  for (int i = 0; i < 4; i++) {
    capyArr[i] = Capybara();
  }
};
// print the name, a space, the age, then a new line
// for each capybara in the order they were added
void Wagon::printCapybaras() {
  for (int i = 0; i < 4; i++) {
    cout << capyArr[i].getName() << " "
         << capyArr[i].getAge() << endl;
  }
};