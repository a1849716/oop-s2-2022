#include "Cage.h"
#include <string>
#include <iostream>
using namespace std;

int main(){
  Cage n1("Richie", 12138);
  cout<<n1.get_name() << " "<< n1.get_IDnum() << endl;
}