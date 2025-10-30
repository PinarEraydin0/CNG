#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int grades[3];
    double average;

    void calculateAverage() {
        int sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += grades[i];
        }
        average = sum / 3.0; 
    }
};

int main() {
    Student student;
    student.name = "Ali";

    cout << "Enter 3 grades: ";
    for (int i = 0; i < 3; i++) {
        cin >> student.grades[i];
    }

    student.calculateAverage();

    cout << "Student Name: " << student.name << endl;
    cout << "Average Grade: " << student.average << endl;

    return 0;
}
