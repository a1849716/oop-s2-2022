#include "animal.h"
#include "vegie.h"

#include <iostream>
#include <string>
using namespace std;

vegie::vegie(string n, int v){
  name = n;
  volume = v;
  favourite_food = "grass";
  nextID = 100;
};

  string vegie::get_favourite_food(){return favourite_food;};

  void vegie::set_favourite_food(string new_fav_food){favourite_food = new_fav_food;};

  string vegie::get_name(){return "Safe: " + name;};