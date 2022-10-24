#ifndef VEGIE_H
#define VEGIE_H
#include "animal.h"

class vegie : public animal {
 private:
  string favorite_food;
  static int nextID;
 public:
  vegie(string n, int v);
  string get_favorite_food();
  void set_favorite_food(string new_fav_food);
  string get_name();
};
#endif
