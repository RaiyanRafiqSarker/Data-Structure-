#include <iostream>
using namespace std;



struct Student {
    int id;
    int creditsCompleted;
    float cgpa;
};



int main() {



    Student students[10];





    for (int i = 0; i < 10; i++) {
        cout << "Enter details for Student " << i + 1 << ":\n";
        cout << "Unique ID: ";
        cin >> students[i].id;
        cout << "Credits Completed: ";
        cin >> students[i].creditsCompleted;
        cout << "CGPA: ";
        cin >> students[i].cgpa;
    }





    cout << "\nStudents with CGPA > 3.75:\n";
    for (int i = 0; i < 10; i++) {
        if (students[i].cgpa > 3.75) {
            cout << "Student ID: " << students[i].id << "\n";
        }
    }





    cout << "\nStudents with Credits Completed > 50:\n";
    for (int i = 0; i < 10; i++) {
        if (students[i].creditsCompleted > 50) {
            cout << "Student ID: " << students[i].id << "\n";
        }
    }



    return 0;
}
