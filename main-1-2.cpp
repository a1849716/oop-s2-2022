#include <iostream>

#include "Musician.h"
#include "Orchestra.h"
using namespace std;

int main() {
  Musician p1("Drums", 5);
  Orchestra o1(2);
  o1.add_musician(p1);
  Musician p2("Trumpet", 6);
  o1.add_musician(p2);
  Musician *o2 = o1.get_members();
  cout << o1.get_current_number_of_members() << endl
       << o2[0].get_instrument() << endl
       << o2[1].get_instrument() << endl;
}