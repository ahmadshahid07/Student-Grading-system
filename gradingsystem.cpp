#include <iostream>
using namespace std;

int main() {
    float m1, m2, m3;
    cout << "Enter marks for 3 subjects: ";
    cin >> m1 >> m2 >> m3;

    float avg = (m1 + m2 + m3) / 3;
    char grade;

    if (avg >= 80) grade = 'A';
    else if (avg >= 70) grade = 'B';
    else if (avg >= 60) grade = 'C';
    else if (avg >= 50) grade = 'D';
    else grade = 'F';

    cout << "Average: " << avg << "\nGrade: " << grade << endl;
    return 0;
}