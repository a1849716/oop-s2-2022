#include "animal.h"

#include <iostream>
#include <string>
using namespace std;

animal::animal(){
  name = "";
  volume = 0;
}
animal::animal(string n, int v) {
  name = n;
  volume = v;
}
string animal::get_name() { return name; };
int animal::get_animalID() { return animalID; };
int animal::get_volume() { return volume; };
void animal::set_name(string inp_name) { name = inp_name; };
void animal::set_volume(int inp_volume) { volume = inp_volume; };
