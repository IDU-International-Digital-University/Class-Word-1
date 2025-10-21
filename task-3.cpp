// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


char calculatorGrades(int marks) {
    char grade;
    
    switch (marks / 10) {
        case 10:
            grade = 'A';
            break;
            
        case 9:
            grade = 'B';
            break;
        case 8:
            grade = 'c';
            break;
        case 7:
            grade = 'D';
            break;
        case 6:
            grade = 'E';
            break;
        case 5:
            grade = 'F';
            break;
        default:
            cout << "Eng past ball Aqli rivojlanmagan!";
            break;
    }
    return grade;
}

void gradeMessage(char grade) {
    switch (grade) {
        case 'A':
            cout << "Zor baho.";
            break;
        case 'B':
            cout << "Yahshi baho.";
            break;
        case 'C':
            cout << "qoniqarli.";
            break;
        case 'D':
            cout << "Imtihondan otishga etadi.";
            break;
        case 'E':
            cout << "Zorga otdi imtihondan. Ilindi.";
            break;
        case 'F':
            cout << "Otolmadiz imtihondan.";
            break;
        default:
            cout << "Invalid grade!" << endl;
            break;
            
    }
}
int main() {
    int marks;
    cout << "Enter your marks (0 - 100): ";
    cin >> marks;
    
    if (marks < 0 || marks > 100) {
        cout << "Kiritilgan baho natogri!";
        return 0;
    }
    
    char grade = calculatorGrades(marks);
    cout << "Your Grade: " << grade << endl;
    gradeMessage(grade);
    return 0;
}