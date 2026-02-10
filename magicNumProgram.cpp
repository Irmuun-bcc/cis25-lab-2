#include <iostream>
using namespace std;

int main() {
    

    int favoriteNumber;
    int magicNumber;

    cout << "Please enter your favorite number: " << endl;
    cin >> favoriteNumber;

    magicNumber = (favoriteNumber * 2 + 10) / 2 - favoriteNumber;
    cout << "Your favorite number is " << magicNumber << "!" << endl;

    return 0;
}