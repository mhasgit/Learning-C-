#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Menu:\n";
    cout << "1. Print Hello\n";
    cout << "2. Print Goodbye\n";
    cout << "3. Exit\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Hello!" << endl;
            break;
        case 2:
            cout << "Goodbye!" << endl;
            break;
        case 3:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
