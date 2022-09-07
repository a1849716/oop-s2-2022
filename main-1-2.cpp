#include <string>

#include "Cage.h"
#include "Clinic.h"
#include <iostream>
using namespace std;

int main() {
  Cage n1("Richie", 12138);
  Clinic c1("Number 1", 1);
  c1.add_cage(n1);
  Cage *c2 = c1.get_cages();
  cout << c1.get_number_of_cages() << " " << c1.get_name() << " "
       << c1.get_cages() << endl;
}