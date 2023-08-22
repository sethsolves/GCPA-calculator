#include <iostream>
#include <string>
#include <iomanip>

using namespace std;  // Added namespace declaration

struct course
{
    string name;
    float grade;
    int credit_hours;
    float grade_point;
};

int main() {
    string name;
    string family_name;

    course first;
    course second;
    course third;
    course forth;
    course fifth;

    first.grade_point = first.grade * first.credit_hours;
    second.grade_point = second.grade * second.credit_hours;
    third.grade_point = third.grade * third.credit_hours;
    forth.grade_point = forth.grade * forth.credit_hours;
    fifth.grade_point = fifth.grade * fifth.credit_hours;

    cout << "GCPA Calculator: (Enter 'exit' to calculate) \n";
    cout << "Enter the student's name: \n";
    getline(cin, name);
    cout << "Enter the student's family name: \n";
    getline(cin, family_name);

    cout << "Enter the course's title: \n";
    getline(cin, first.name);
    cout << "Enter the course's total credit hours:\n";
    cin >> first.credit_hours;
    cout << "Enter the grade earned in the course: \n";
    cin >> first.grade;

    cin.ignore();  // Ignore the newline character left in the input buffer

    cout << "Enter the course's title: \n";
    getline(cin, second.name);
    cout << "Enter the course's total credit hours:\n";
    cin >> second.credit_hours;
    cout << "Enter the grade earned in the course: \n";
    cin >> second.grade;

    cin.ignore();

    cout << "Enter the course's title: \n";
    getline(cin, third.name);
    cout << "Enter the course's total credit hours:\n";
    cin >> third.credit_hours;
    cout << "Enter the grade earned in the course: \n";
    cin >> third.grade;

    cin.ignore();

    cout << "Enter the course's title: \n";
    getline(cin, forth.name);
    cout << "Enter the course's total credit hours:\n";
    cin >> forth.credit_hours;
    cout << "Enter the grade earned in the course: \n";
    cin >> forth.grade;

    cin.ignore();

    cout << "Enter the course's title: \n";
    getline(cin, fifth.name);
    cout << "Enter the course's total credit hours:\n";
    cin >> fifth.credit_hours;
    cout << "Enter the grade earned in the course: \n";
    cin >> fifth.grade;

    float total_grade_point;
    total_grade_point = first.grade_point + second.grade_point + third.grade_point + forth.grade_point + fifth.grade_point;
    int total_credit_hours;
    total_credit_hours = first.credit_hours + second.credit_hours + third.credit_hours + forth.credit_hours + fifth.credit_hours;
    float gpa;
    gpa = total_grade_point / total_credit_hours;

    // Set precision to 2 decimal places, fix notation, and show trailing zeros

    cout << "GPA = " << setprecision(2) << fixed << showpoint << gpa << endl;

    return 0;
}
