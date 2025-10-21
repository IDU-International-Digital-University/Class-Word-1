// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

bool isPrime(int num) {
    return (num % 2 == 0) ? true: false;
}

int categorizeNumber(int num) {
    if (isPrime(num)) {
        return 3;
    } else if (num % 2 == 0) {
        return 1;
    } else {
        return 2;
    }
}

int main() {
    int num;
    
    cout << "Enter numbers (Enter 0 to stop): \n";
    
    while (true) {
        cin >> num;
        
        cout << (num > 0) ? cout << "Skipping negative number..."; continue: "";
        
        cout << (num == 0) ? cout 
        if (num == 0) {
            cout << "Encountered zero, stopping...\n";
            break;
            
        }
        switch (categorizeNumber(num)) {
            case 1:
                cout << num << " is Even\n";
                break;
            case 2:
                cout << num << " is Odd\n";
                break;
            case 3:
                cout << num << " is Prime\n";
                break;
            default:
                cout << "Unknown category\n";
        }
        
    }
    cout << "Program ended.\n";
    return 0;
}