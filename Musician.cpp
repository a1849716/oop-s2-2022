#include "Musician.h"
#include <iostream>
#include <string>
using namespace std;

Musician::Musician(){
  instrument = "null";
  experience = 0;
}
Musician::Musician(string inp_instrument, int inp_experience){
  instrument = inp_instrument;
  experience = inp_experience;
}
string Musician::get_instrument(){return instrument; }
int Musician::get_experience(){return experience; } 