#ifndef HUNTER_H
#define HUNTER_H
#include "animal.h"

class hunter : public animal {
 private:
  static int nextID;
  int nextID = 1000;
  int kills;
 public:
  hunter(string n, int v);
  int get_kills();
  void set_kills(int new_kills);
  string get_name();
};
#endif
