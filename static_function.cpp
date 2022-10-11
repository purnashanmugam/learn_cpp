#include <iostream>
using namespace std;

class Student
{
    static int cls_total;
    static int n;
    int mark;
    public:
    void get_marks()
    {
        cout << "Enter mark\n";
        cin >> mark;
        cls_total = cls_total + mark;
        n++;
    }
    static void class_avg()
    {
        cout << "Average of all students in a class: " << cls_total / n;
    }
};
    int Student :: cls_total = 0;
    int Student :: n = 0;
int main()
{
    Student s[3];
    for(int i=0;i<3;i++)
    {
        s[i].get_marks();
    }
    s[2].class_avg();
    return 0;
}