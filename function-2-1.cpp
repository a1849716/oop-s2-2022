#include <iostream>
using namespace std;

int *readNumbers() {
  int *nums = new int[10];
  for (int i = 0; i < 10; i++) {
    cin >> nums[i];
  }
  return nums;
}

void hexDigits(int *numbers, int length) {
  for (int i = 0; i < length; i++) {
    cout << i << " " << *(numbers + i) << " ";
    switch (numbers[i]) {
      case 0:
        cout << 0;
        break;
      case 1:
        cout << 1;
        break;
      case 2:
        cout << 2;
        break;
      case 3:
        cout << 3;
        break;
      case 4:
        cout << 4;
        break;
      case 5:
        cout << 5;
        break;
      case 6:
        cout << 6;
        break;
      case 7:
        cout << 7;
        break;
      case 8:
        cout << 8;
        break;
      case 9:
        cout << 9;
        break;
      case 10:
        cout << 'A';
        break;
      case 11:
        cout << 'B';
        break;
      case 12:
        cout << 'C';
        break;
      case 13:
        cout << 'D';
        break;
      case 14:
        cout << 'E';
        break;
      case 15:
        cout << 'F';
        break;
    }
    cout << endl;
  }
}