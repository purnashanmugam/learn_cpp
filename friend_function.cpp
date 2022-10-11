#include <iostream>
using namespace std;

class Student
{
    string Name;
    int Roll_no;

    public:
    Student(string name, int roll_no)
    {
        Name = name;
        Roll_no = roll_no;
    }
    friend class Department;
};

class Department
{
    public:
    void print_student(Student &s)
    {
        cout << "Name: " << s.Name << "\nRoll Number: " << s.Roll_no;
    }
};

int main()
{
    Student s("purna", 1);
    Department d;
    d.print_student(s);
    return 0;
}