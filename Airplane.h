#include "Person.h"
using namespace std;

class Airplane {
 private:
 string TheCallsign;
 Person The_Pilot;
 Person The_CoPilot;
 public:
  Airplane(string callsign, Person thePilot, Person theCoPilot);
  void setPilot(Person thePilot);
  Person getPilot();
  void setCoPilot(Person theCoPilot);
  Person getCoPilot();
  void printDetails();
};