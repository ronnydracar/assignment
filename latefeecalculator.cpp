#include <iostream>
using namespace std;

int main() {
    int NumberofDaysLate;
    double LateFees;
    string TypeofBook;

    cout << "Enter the type of book : ";
    cin >> TypeofBook;

    cout << "Enter the number of days late: ";
    cin >> NumberofDaysLate;

        if (TypeofBook == "regular") {
            LateFees =  NumberofDaysLate * 100;
        } else if (TypeofBook == "children's") {
            LateFees = NumberofDaysLate * 200;
        } else if (TypeofBook == "non-fiction") {
              LateFees =  NumberofDaysLate * 270;
        } else if (TypeofBook == "reference") {
        LateFees =  NumberofDaysLate * 400;
        } else {
            cout << "Such a book type does not exist." << endl;
            return 1;
        }

        cout << "You have returned a "<< TypeofBook << "book. Therefore your fee for returning it "<<NumberofDaysLate<< "late is sh. "<<LateFees << endl;
    

    return 0;
}
