#include <iostream>
using namespace std;

int main() {
    int people, slicePerPizza, slicesPerPerson, totalNeeded, pizzasNeeded, sliceRemainder;

    cout << "Enter the number of attendees: ";
    cin >> people;

    cout << "Enter the number of slices per pizza: ";
    cin >> slicePerPizza;

    cout << "Enter the number of slices each attendee will eat: ";
    cin >> slicesPerPerson;

    totalNeeded = people * slicesPerPerson;
    pizzasNeeded =  (totalNeeded + slicePerPizza - 1) / slicePerPizza;
    sliceRemainder = (pizzasNeeded * slicePerPizza) - totalNeeded;

    cout << "Total slices needed: " << totalNeeded << endl;
    cout << "Pizzas needed: " << pizzasNeeded << endl;
    cout << "Slices left over: " << sliceRemainder << endl;

    return 0;
}