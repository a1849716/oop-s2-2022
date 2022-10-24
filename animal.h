#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
using namespace std;

class animal {
  protected:
  string name;
  int animalID;
  int volume;

 public:
  animal();
  animal(string n, int v);
  virtual string get_name();
  int get_animalID();
  int get_volume();
  void set_name(string inp_name);
  void set_volume(int inp_volume);
};
#endif