#include <iostream>
#include <string>
using namespace std;

string month_lookup(int month) {
  string strMon = "";
  switch (month) {
    case 1:
      strMon = "Jan";
      break;
    case 2:
      strMon = "Feb";
      break;
    case 3:
      strMon = "Mar";
      break;
    case 4:
      strMon = "Apr";
      break;
    case 5:
      strMon = "May";
      break;
    case 6:
      strMon = "Jun";
      break;
    case 7:
      strMon = "Jul";
      break;
    case 8:
      strMon = "Aug";
      break;
    case 9:
      strMon = "Sep";
      break;
    case 10:
      strMon = "Oct";
      break;
    case 11:
      strMon = "Nov";
      break;
    case 12:
      strMon = "Dec";
      break;
    defult:
      strMon = "invalid month";
  }
  return strMon;
}