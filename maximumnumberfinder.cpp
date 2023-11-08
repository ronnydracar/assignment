#include <iostream>
using namespace std;

int main() {
  double firstnumber, secondnumber;

  cout << "Enter the first number: ";
  cin >> firstnumber;

  cout << "Enter the second number: ";
  cin >> secondnumber;

  int compare = (firstnumber > secondnumber) ? 1 : ((secondnumber > firstnumber) ? 2 : 0);

  switch (compare) {
    case 1:
      cout << "Maximum number is: " << firstnumber << endl;
      break;
    case 2:
      cout << "Maximum number is: " << secondnumber << endl;
      break;
    default:
      cout << "Both numbers are equal." << endl;
  }

  return 0;
}

