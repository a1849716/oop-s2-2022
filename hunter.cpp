#include "animal.h"
#include "hunter.h"

#include <iostream>
#include <string>
using namespace std;

hunter::hunter(string n, int v){
  name = n;
  volume = v;
  kills = 0;
  nextID++;
};
int hunter::nextID = 1000;

int hunter::get_kills(){return kills;};

string hunter::get_name(){return "Hunter: " + name;};

void hunter::set_kills(int new_kills){kills = new_kills;};