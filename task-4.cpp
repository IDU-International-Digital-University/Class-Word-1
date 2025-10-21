// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void rightTriangle(int rows) {
    cout << "\n Right Triangle Pattern: \n";
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " * ";
        }
        cout << endl;
    }
}

void pyramid(int rows) {
    cout << "\n Pyramid Pattern: \n";
    for (int i = 1; i <= rows; i++) {
        for (int s = i; s < rows; s++) {
            cout << " * ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << j;
        }
        cout << endl;
    }
}

void square(int rows ) {
    cout << "\n Square Pattern: \n";
    for (int i =1; i <= rows; i++) {
        for (int j =1; j <= rows; j++) {
            cout << j << " * ";
        }
        cout << endl;
    }
}

int main() {
    int choice, rows;

    cout << "\n ---- Welcome T0 Number Pattern Generator ---- \n";
    cout << "1. Right Triangle\n";
    cout << "2. Pyramid\n";
    cout << "3. Square\n";
    cout << "Enter your choice (1-3)";
    cin >> choice;

    if (choice < 1 || choice > 3) {
        cout << "INvalid choice! Please run the program again.\n";
        return 0;
    }

    cout << "Enter umber of rows (1 - 40): ";
    cin >> rows;

    if (rows < 1 || rows >> 20) {
        cout << "Invalid number of rows Must be between 1 and 20. \n";
        return 0;
    }

    switch (choice) {
        case 1:
            rightTriangle(rows);
            break;
        case 2:
            pyramid(rows);
            break;
        case 3:
            square(rows);
            break;
        default:
            cout << "Invalid choice!";
            break;
    }
    return 0;
}