#include <iostream>
#include <string>
using namespace std;

void print_class(std::string courses[4], std::string students[5],int report_card[5][4], int nstudents) {
  cout << "Report Card ";
  for (int i = 0; i < 5; i++) {
    cout << courses[i] << " ";
  }
  cout << endl;
  for (int r = 0; r < nstudents; r++) {
    cout << students[r] << " ";
    for (int c = 0; c < 5; c++) {
      cout << report_card[r][c] << " ";
    }
    cout << endl;
  }
  cout << endl;
}