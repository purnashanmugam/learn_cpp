/*
Assume an institution has setup exam paper for each department students.  Depending on student's department, appropriate exam function needs to be called. Assume there are 100 students and each student studies in a department. There are 5 departments - Electrical, CS, Electronics, Civil. Mechanical. And Each department has provided a function call () to be invoked for its department student. For eg. assessCSStudent() is the function to be called for the computer science student..  Write code to achieve this... USe arrays to store students data, use pointers to array to traverse student list, use enumeration for departments and use function pointers to invoke appropriate assessment call. 
Also suggest how this implementation could have been made simpler.
*/

#include<iostream>
#include<string>
using namespace std;

typedef enum{Electrical, CS, Electronics, Civil, Mechanical} DEPARTMENT;

struct Student
{
    string Name;
    int Roll_no;
    DEPARTMENT dept;
};

void display_student(struct Student s)
{
    cout << s.Name << s.dept << s.Roll_no <<"\n";
}

void assessElectricalStudent()
{
    cout << "Assess Electrical student\n";
}

void assessCSStudent()
{
    cout << "Assess CS student\n";
}

void assessElectronicsStudent()
{
    cout << "Assess Electronics student\n";
}

void assessCivilStudent()
{
    cout << "Assess Civil student\n";
}

void assessMechanicalStudent()
{
    cout << "Assess Mechanical student\n";
}
int main()
{
    Student s[3];
    int i;
    for(i=0;i<3;i++)
    {
        int n;
        cout << "Enter Name\n";
        cin >> s[i].Name;
        cout << "Enter roll no\n";
        cin >> s[i].Roll_no;
        cout << "Enter department 0->Electrical, 1->CS, 2->Electronics, 3->Civil, 4->Mechanical\n";
        cin >> n;
        s[i].dept = (DEPARTMENT)n;
        //display_student(s[i]);
        void (*fun_ptr[])() = {assessElectricalStudent, assessCSStudent, assessElectronicsStudent, assessCivilStudent, assessMechanicalStudent};
        fun_ptr[s[i].dept]();
    }

}