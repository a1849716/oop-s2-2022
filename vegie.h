#ifndef VEGIE_H
#define VEGIE_H
#include "animal.h"

class vegie : public animal {
 private:
  string favourite_food;
  static int nextID;
 public:
  vegie(string n, int v);
  string get_favourite_food();
  void set_favourite_food(string new_fav_food);
  string get_name();
};
#endif
