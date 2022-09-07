#include "Clinic.h"
#include "Cage.h"
#include <string>
using namespace std;

Clinic::Clinic(){
  ptrCage = new Cage;
  clinicName = "";
  count = 0;
}

Clinic::Clinic(string Name, int max_size){
  ptrCage = new Cage[max_size];
  clinicName = Name;
  count = 0;
  max = max_size;
}

int Clinic::get_number_of_cages(){return count;}

string Clinic::get_name(){return clinicName; }

Cage* Clinic::get_cages() { return ptrCage;}

bool Clinic::add_cage(Cage new_cage){
  if (count < max){
    ptrCage[count] = new_cage;
    count++;
    return true;
  }
  return false;
}

Clinic::~Clinic() {};
