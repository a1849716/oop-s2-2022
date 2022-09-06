#include "Orchestra.h"

#include <iostream>
#include <string>

#include "Musician.h"
using namespace std;

Orchestra::Orchestra() {
  ptr_array = new Musician;
  count = 0;
}
Orchestra::Orchestra(int size) {
  ptr_array = new Musician[size];
  max_size = size;
}

int Orchestra::get_current_number_of_members() {
  int curr_players = 0;
  for (int i = 0; i < count; i++) {
    if (ptr_array[i].get_instrument() == " ") {
      count++;
    }
  }
  return curr_players;
}

bool Orchestra::has_instrument(string inp_instrument) {
  for (int i = 0; i <= count; i++) {
    if (ptr_array[i].get_instrument() == inp_instrument) {
      return true;
    }
  }
  return false;
}

Musician *Orchestra::get_members() { return ptr_array; }

bool Orchestra::add_musician(Musician new_musician) {
  if (count < max_size) {
    ptr_array[count] = new_musician;
    count++;
    return true;
  } else {
    return false;
  }
}

Orchestra::~Orchestra(){}