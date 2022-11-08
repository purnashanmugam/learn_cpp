#include<iostream>
using namespace std;
class Company
{
    public:
        Company()
        {
            cout << "Calling base class constructor\n";
        }
        ~Company()
        {
            cout << "Calling base class destructor\n";
        }
        int emp_id;
        string name;
        string department;

        void get_employee_data()
        {
            cout << "Employee ID: \n" << emp_id << "\n" << "Employee name: \n" << name << "\n" << "Department: \n" << department << "\n";
        }

        void set_employee_data(int emp_id, string name, string department)
        {
            this -> emp_id = emp_id;
            this -> name = name;
            this -> department = department;
        }

        virtual string get_employee_department()
        {
            return department;
        }
};

class HR : public Company
{
    public:
        HR()
        {
            cout << "Calling derived class 'HR' constructor\n";
        }
        ~HR()
        {
            cout << "Calling derived class 'HR' destructor\n";
        }
        string get_employee_department()
        {
            return department;
        }
};

class Finance : public Company
{
    public:
        Finance()
        {
            cout << "Calling derived class 'Finance' constructor\n";
        }
        ~Finance()
        {
            cout << "Calling derived class 'Finance' destructor\n";
        }
        string get_employee_department()
        {
            return department;
        }
};

class Support : public Company
{
    public:
        Support()
        {
            cout << "Calling derived class 'Support' constructor\n";
        }
        ~Support()
        {
            cout << "Calling derived class 'Support' destructor\n";
        }
        string get_employee_department()
        {
            return department;
        }
};

int main()
{
    Company *c = new Company;
    //Company *c;
    HR hr;
    Finance f;
    Support s;
    c = &hr;
    c->set_employee_data(1, "Purna", "HR");
    c->get_employee_data();
    cout << "Employee department:\n" << c->get_employee_department() << "\n";
    c = &f;
    c->set_employee_data(2, "Priya", "Finance");
    c->get_employee_data();
    cout << "Employee department:\n" << c->get_employee_department() << "\n";
    c = &s;
    c->set_employee_data(3, "Ram", "Support");
    c->get_employee_data();
    cout << "Employee department:\n" << c->get_employee_department() << "\n";
    return 0;
}