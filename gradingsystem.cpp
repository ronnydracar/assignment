#include <iostream>
using namespace std;

int main() {
  double score;
  string FullName;
  string course;

  cout << "Enter your full name: ";
  getline(cin, FullName);

  cout << "Enter your course: ";
  getline(cin, course);

  cout << "Enter your score: ";
  cin >> score;

  if (score >= 70) {
    cout << FullName << ", your grade is A." << endl;
  } else if (score >= 60) {
    cout << FullName << ", your grade is B." << endl;
  } else if (score >= 50) {
    cout << FullName << ", your grade is C." << endl;
  } else if (score >= 40) {
    cout << FullName << ", your grade is D." << endl;
  } else if (score < 40) {
    cout << FullName << ", your grade is F." << endl;
  } else {
    cout << FullName << ", your score is invalid." << endl;
  }

  return 0;
}
