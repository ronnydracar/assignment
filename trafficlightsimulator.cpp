#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    int option;
    cout << "Welcome to the traffic light simulator:" << endl;
    cout << "1. Red" << endl;
    cout << "2. Yellow" << endl;
    cout << "3. Green" << endl;
    cout << "4. Quit" << endl;
    cout << "Choose an option from the ones above ";
    cin >> option;

    switch (option) {
        case 1:
            cout << "red light" << endl;
            this_thread::sleep_for(chrono::seconds(10)); 
            break;
        case 2:
            cout << "yellow light" << endl;
            this_thread::sleep_for(chrono::seconds(7)); 
            break;
        case 3:
            cout << "green light" << endl;
            this_thread::sleep_for(chrono::seconds(4)); 
            break;
        case 4:
            cout << "Quitting the simulator." << endl;
            return 0;
        default:
            cout << "Invalid option" << endl;
    }

    return 0;
}
