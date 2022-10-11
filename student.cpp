#include <iostream>
using namespace std;
class Student
{
    public:
    string name;
    int roll_no;
    string grade;
    int percentage;

    void print_student()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Grade: " << grade << endl;
        cout << "Percentage: " << percentage << endl;
    }
};
int main()
{
    Student s[5];
    cout << "Enter student details\n";
    for(int i = 0; i < 5; i++)
    {
        cout << "Enter Name\n";
        cin >> s[i].name;
        cout << "Enter Roll Number\n";
        cin >> s[i].roll_no;
        cout << "Enter Grade\n";
        cin >> s[i].grade;
        cout << "Enter Percentage\n";
        cin >> s[i].percentage;
        s[i].print_student();
    }

}