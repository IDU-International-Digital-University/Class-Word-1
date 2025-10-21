// Online C++ compiler to run C++ program online
#include <iostream>

int multiplay(int n1, int n2) { return n1 * n2; }
int devide(int n1, int n2) { return n1 / n2; }
int minus(int n1, int n2) { return n1 - n2; }
int plus(int n1, int n2) { return n1 + n2; }

int main() {
    char op;
    double num1, num2;
    
    std::cout << "Enter an operation (+, -, *, /):";
    std::cin >> op;
    
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    
    switch (op) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << plus(num1, num2) << std::endl;
            break;
        case '-':
            std::cout << num1 << " - " << num2 << " = " << minus(num1, num2) << std::endl;
            break;
        case '*':
            std::cout << num1 << " * " << num2 << " = " << multiplay(num1, num2) << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                std::cout << num1 << " / " << num2 << " = " << devide(num1, num2) << std::endl;
            } else {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
            }
            break;
        default:
            std::cout << "Input error!";
            break;
            
    }

    return 0;
}