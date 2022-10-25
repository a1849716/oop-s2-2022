#include "animal.h"
#include "hunter.h"
#include "vegie.h"
#include "zoo.h"
#include<string>
using namespace std;

zoo::zoo(string n,int cows,int lions){
  name = n;
  number_of_animals = cows+lions;
  animals = new animal *[number_of_animals];
};

string zoo::get_name(){return name;};

int zoo::get_number_of_animals(){return number_of_animals;};

animal* zoo::get_animals(){
  animal* ptr_animals = animals[0];
  return ptr_animals;
  };