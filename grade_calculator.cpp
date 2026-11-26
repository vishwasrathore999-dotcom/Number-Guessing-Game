
#include <iostream>
using namespace std;

int main() {
    float mark1, mark2, mark3, average;

    cout << "===== GRADE CALCULATOR =====" << endl;

    cout << "Enter marks of Subject 1: ";
    cin >> mark1;

    cout << "Enter marks of Subject 2: ";
    cin >> mark2;

    cout << "Enter marks of Subject 3: ";
    cin >> mark3;

    if (mark1 < 0 || mark1 > 100 ||
        mark2 < 0 || mark2 > 100 ||
        mark3 < 0 || mark3 > 100) {
        cout << "Invalid Marks! Enter marks between 0 and 100.";
        return 0;
    }

    average = (mark1 + mark2 + mark3) / 3;

    cout << "\nAverage Marks: " << average << endl;

    if (average >= 90)
        cout << "Grade: A";
    else if (average >= 80)
        cout << "Grade: B";
    else if (average >= 70)
        cout << "Grade: C";
    else if (average >= 60)
        cout << "Grade: D";
    else
        cout << "Grade: F";

    return 0;
}
