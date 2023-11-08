#include <iostream>
using namespace std;

int main() {
    string FullName;
    double BankBalance;
    int age;
    string CRBstatus;
    int customerperiod ;

    cout << "Enter your full name: ";
    getline(cin, FullName);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your bank balance: ";
    cin >> BankBalance;

    cout << "Enter your CRB status ";
    cin >> CRBstatus;

    cout << "Enter the number of months as a customer: ";
    cin >> customerperiod;

    if (age > 22 && BankBalance > 50000 && CRBstatus == "good" && customerperiod> 6) {
        cout << "Congratulations, " << FullName << "! You are qualified for the loan." << endl;
    } else {
        cout << "Sadly, " << FullName << ", you do not qualify for the loan." << endl;
    }

    return 0;
}
