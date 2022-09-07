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
  count = 0;
}

int Orchestra::get_current_number_of_members() {
  return count+1;
}

bool Orchestra::has_instrument(string inp_instrument) {
  for (int i = 0; i < max_size; i++) {
    if (ptr_array[i].get_instrument() == inp_instrument) {
      return 1;
    }
  }
  return 0;
}

Musician *Orchestra::get_members() { return ptr_array; }

bool Orchestra::add_musician(Musician new_musician) {
  if (count < max_size) {
    ptr_array[count] = new_musician;
    count++;
    return 1;
  }
  
  return 0;
}

Orchestra::~Orchestra(){}