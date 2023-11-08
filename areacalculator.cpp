#include <iostream>
using namespace std;

int main() {
  int option;

  cout << "Menu:" << endl;
  cout << "1. Calculate the area of a circle" << endl;
  cout << "2. Calculate the area of a rectangle" << endl;
  cout << "3. Calculate the area of a triangle" << endl;
  cout << "4. Quit" << endl;
  cout << "Choose an option from the one above: ";
  cin >> option;

  switch (option) {
    case 1: {
      double radius;
      cout << "Enter the radius of cirle ";
      cin >> radius;
      if (radius < 0) {
        cout << "invalid radius!" << endl;
      } else {
        double area = 3.14159 * radius * radius;
        cout << "The area of the circle is " << area << endl;
      }
      break;
    }

    case 2: {
      double length, width;
      cout << "Enter the length of the rectangle: ";
      cin >> length;
      cout << "Enter the width of the rectangle: ";
      cin >> width;
      if (length < 0 or width < 0) {
        cout << "invalid length " << endl;
      } else {
        double area = length * width;
        cout << "The area of the rectangle is: " << area << endl;
      }
      break;
    }

    case 3: {
      double base, height;
      cout << "Enter the base of the triangle: ";
      cin >> base;
      cout << "Enter the height of the triangle: ";
      cin >> height;
      if (base < 0 or height < 0) {
        cout << "Invalid input: Base and height cannot be negative." << endl;
      } else {
        double area = 0.5 * base * height;
        cout << "The area of the triangle is: " << area << endl;
      }
      break;
    }

    case 4:
      cout << "Goodbye!" << endl;
      break;

    default:
      cout << "Invalid choice. Please enter a valid option." << endl;
  }

  return 0;
}
