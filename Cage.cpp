#include "Cage.h"
#include <string>
using namespace std;

Cage::Cage(){
  Name = " ";
  ID = 0;
};

Cage::Cage(string newName, int newNumber){
  Name = newName;
  ID = newNumber;
}

string Cage::get_name(){return Name;}

int Cage::get_IDnum(){return ID;}

Cage::~Cage(){}
