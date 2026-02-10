#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double totalCost, price, tax;
    double salesTaxRate = 0.075;        // 7.5% sales tax

    cout << "Enter price of the item: $";
    cin >> price;

    tax = price * salesTaxRate;         // Only sales tax for the item

    totalCost = price + tax;        // Total cost including tax

    cout << fixed << setprecision(2);
    cout << "Original Price: $" << price << endl;

    cout << fixed << setprecision(2);
    cout << "Sales tax: $" << tax << endl;

    cout << fixed << setprecision(2);
    cout << "Total Cost: $" << totalCost << endl;

    return 0;
}