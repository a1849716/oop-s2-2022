#include "Airplane.h"
#include "Person.h"
#include <iostream>
#include <string.h>
using namespace std;

Airplane::Airplane(string callsign, Person thePilot, Person theCoPilot){
  TheCallsign = callsign;
  The_Pilot = thePilot;
  The_CoPilot = theCoPilot;
}
void Airplane::setPilot(Person thePilot) {The_Pilot = thePilot; }
Person Airplane::getPilot() {cout << The_Pilot.getName() << endl;}
void Airplane::setCoPilot(Person theCoPilot) {The_CoPilot = theCoPilot;}
Person Airplane::getCoPilot() {cout << The_CoPilot.getName() << endl;}
void Airplane::printDetails(){
  cout << TheCallsign << endl << The_Pilot.getName() << endl<< The_CoPilot.getName() << endl;
};