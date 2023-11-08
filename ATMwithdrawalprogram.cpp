#include <iostream>
using namespace std;

int main() {
    double AccountBalance = 200000; 
    double withdrawalAmount;
    double DailyLimit = 100000;
    double withdrawalLimit = 180000;

    cout << "Welcome to Viwex ATM." << endl;
    cout << "Your current account balance is sh." << AccountBalance << endl;
    
    cout << "Enter the withdrawal amount: sh.";
    cin >> withdrawalAmount;

    if (withdrawalAmount > DailyLimit) {
        cout << "You have gone beyond your daily limit. Your daily limit is sh." << DailyLimit << endl;
    } else if (withdrawalAmount > withdrawalLimit) {
        cout << "You have gone beyond your daily limit. Your daily limit is sh." << withdrawalLimit << endl;
    } else if (withdrawalAmount > AccountBalance) {
        cout << "Insufficient funds." << endl;
    } else {
        cout << "Withdrawal successful." << AccountBalance << endl;
    }

    return 0;
}
