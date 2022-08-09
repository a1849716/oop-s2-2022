#include <iostream>
#include <string>
using namespace std;

void print_class(std::string courses[4], std::string students[5],
                 int report_card[5][4], int nstudents) {
  cout << "Report Card ";
  for (int i = 0; i < 4; i++) {
    cout << courses[i] << " ";
    if (i != 3) {
      cout << " ";
    }
  }
  cout << endl;
  for (int r = 0; r < nstudents; r++) {
    cout << students[r] << " ";
    for (int c = 0; c < 4; c++) {
      cout << report_card[r][c];
      if (c != 3) {
        cout << " ";
      }
    }
  cout << endl;
  }
}
