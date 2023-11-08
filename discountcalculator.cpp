#include <iostream>
using namespace std;

int main() {
    double purchaseAmount;
    double totalCost = 0.0;

    cout << "Enter the purchase amount: $";
    cin >> purchaseAmount;

   
        if (purchaseAmount < 50) {
            totalCost = purchaseAmount;
        } else if (purchaseAmount < 100) {
            totalCost = purchaseAmount * 0.9;  
        } else if (purchaseAmount < 200) {
            totalCost = purchaseAmount * 0.8; 
        } else {
            totalCost = purchaseAmount * 0.7;  
        }

        cout << "Total cost after applying discounts: $" << totalCost << endl;


    return 0;
}