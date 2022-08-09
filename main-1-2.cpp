#include <iostream>
#include <string>
using namespace std;

extern void print_class(std::string courses[4], std::string students[5], int report_card[5][4], int nstudents);

int main() {
  string courses[4] = {"Maths", "English", "Technology", "Music"};
  string students[5] = {"Richie", "Jun", "Khush", "Jason", "An"};
  int report_card[5][4] = {};
  print_class(courses, students, report_card, 5);
}