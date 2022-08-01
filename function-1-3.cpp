#include <iostream>
using namespace std;

void count_digits(int array[4][4]) {
  int zero, one, two, three, four, five, six, seven, eight, nine;
  zero = one = two = three = four = five = six = seven = eight = nine = 0;
  for (int r = 0; r < 4; r++) {
    for (int c = 0; c < 4; c++) {
      switch (array[r][c]) {
        case 0:
          zero++;
          break;
        case 1:
          one++;
          break;
        case 2:
          two++;
          break;
        case 3:
          three++;
          break;
        case 4:
          four++;
          break;
        case 5:
          five++;
          break;
        case 6:
          six++;
          break;
        case 7:
          seven++;
          break;
        case 8:
          eight++;
          break;
        case 9:
          nine++;
          break;
      }
    }
  }
  cout << "0:" << zero << ";1:" << one << ";2:" << two << ";3:" << three
       << ";4:" << four << ";5:" << five << ";6:" << six << ";7:" << seven
       << ";8:" << eight << ";9:" << nine<<";\n";
}