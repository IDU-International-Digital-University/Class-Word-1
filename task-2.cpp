// Online C++ compiler to run C++ program online
#include <iostream>

bool isPrime(int num) {
    return (num % 2 == 0) ? true: false;
}
int main() {
    int start, end;
    
    std::cout << "Enter start of range: ";
    std::cin >> start;
    
    std::cout << "Enter end of range: ";
    std::cin >> end;
    
    std::cout << "Prime numbers between " << start << start << " and " << end << " are:\n";
    
    for (int i = start; i <= end; i++ ) {
        if (!isPrime(i)) {
            continue;
        } else {
            std::cout << i << " ";
        }
    }
    return 0;
}