#include "animal.h"
#include "vegie.h"

#include <iostream>
#include <string>
using namespace std;

vegie::vegie(string n, int v){
  name = n;
  volume = v;
  favorite_food = "grass";
  nextID = 100;
};

  string vegie::get_favorite_food(){return favorite_food;};

  void vegie::set_favorite_food(string new_fav_food){favorite_food = new_fav_food;};

  string vegie::get_name(){return "Safe: " + name;};