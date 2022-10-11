#include <iostream>
using namespace std;
class Student
{
    public:
    string name;
    int roll_no;
    string grade;
    int percentage;

    void get_student()
    {
    cout << "Enter student details\n";
        cout << "Enter Name\n";
        cin >> name;
        cout << "Enter Roll Number\n";
        cin >> roll_no;
        cout << "Enter Grade\n";
        cin >> grade;
        cout << "Enter Percentage\n";
        cin >> percentage;
    }

    void print_student()
    {
        get_student();
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Grade: " << grade << endl;
        cout << "Percentage: " << percentage << endl;
    }
};

int n = 0;
int main()
{
    while(n<5)
    {
        Student s;
        s.print_student();
        n++;
        main();
        return 0;
    }
    return 0;
}