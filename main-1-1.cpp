#include <iostream>
#include <string>

#include "Musician.h"
using namespace std;

int main() {
  Musician p1("Drums", 5);
  cout << p1.get_instrument() << " " << p1.get_experience() << endl;
}