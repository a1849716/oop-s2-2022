#ifndef ZOO_H
#define ZOO_H
#include "animal.h"
#include "hunter.h"
#include "vegie.h"
#include<string>
using namespace std;

class zoo{
private:
  string name;
  int number_of_animals;
  animal **animals;
public:
  zoo(string n,int cows,int lions);
  string get_name();
  int get_number_of_animals();
  animal* get_animals();
};
#endif