#include "Person.h"
#include "Airplane.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
  Person Pilot(0, "Richie");
  Person CoPilot(0,"Jun");
  Person Another(0, "Khush"); 
  Airplane p1("lmaoxd", Pilot, CoPilot);
  p1.printDetails();
}