#include<iostream>
#include<memory>
#include<cstring>
using namespace std;
class Company
{
    public:
        Company()
        {
            cout << "Calling base class constructor\n";
        }
        virtual ~Company()
        {
            cout << "Calling base class destructor\n";
        }
        typedef enum {Associate_Software_engineer, Software_engineer, TL, Manager} DESIGNATION;
        int emp_id;
        string name;
        string department;
        DESIGNATION designation;
        bool status = true;



        void get_employee_data()
        {
            cout << "Employee ID: \n" << emp_id << "\n" << "Employee name: \n" << name << "\n" << "Department: \n" << department << "\n";
        }

        void set_employee_data(int emp_id, string name, string department, int role)
        {
            this -> emp_id = emp_id;
            this -> name = name;
            this -> department = department;
            this -> designation = (DESIGNATION)role;
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

        void schedule_interview()
        {
            if (status)
            {
                cout << "Schedule an interview for a candidate to employee: " << emp_id << "\n";
                status = false;
            }
            else
            {
                cout << "Unable to schedule an interview for a candidate to employee: " << emp_id << "\n";
            }
        }
        void recruite_candidate(int emp_id, string name, string department, int role)
        {
            cout << "Recruiting employee Purna\n";
            set_employee_data(1, "Purna", "delivery", 1);
            get_employee_data();
        }
};

class Finance : public Company
{
    public:
        int salary;
        string reimbursement_category[3] = {"Internet", "mobile_recharge", "travel"};
        int reimbursement_amt;
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
        void credit_salary()
        {
            switch(designation)
            {
                
                case Associate_Software_engineer:
                    this->salary = 40000;
                    break;
                case Software_engineer:
                    this->salary = 50000;
                    break;
                case TL:
                    this->salary = 80000;
                    break;
                case Manager:
                    this->salary = 100000;
                    break;

            }
            cout << "Credited salary: " << this->salary << " to employee: " << emp_id << "\n";
        }
        void raise_reimbursement(string category, int amount)
        {
            for(int i=0;i<3;i++)
            {
                if(category == reimbursement_category[i])
                {
                    reimbursement_amt = amount;
                    cout << "Reimbursing amount: " << amount << " to employee: " << emp_id << "\n";
                    return;
                }
            } 
            cout << "Unable to reimberse\n";
        }
};

class Support : public Company
{
    public:
        static int ticket_id;
        string issue_description;
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
        int raise_ticket(string issue_description)
        {
            ticket_id++;
            this -> issue_description = issue_description;
            cout << "Raised a ticket with id: " << ticket_id << " for issue '" << issue_description << "'\n";
            return ticket_id;
        }
        void resolve_ticket(int ticket_id)
        {
            cout << "Resolving the ticket: " << ticket_id << "\n";
            ticket_id--;
        }

};
int Support::ticket_id = 0;
int main()
{
    //Company *c = new HR();
    /*
    unique_ptr<Company> c(new HR);
    c->set_employee_data(1, "Purna", "HR", 1);
    c->get_employee_data();
    cout << "Employee department:\n" << c->get_employee_department() << "\n";
    */
    int n;
    cout << "Enter 1-> HR 2-> Finance 3-> Support\n";
    cin >> n;
    switch(n)
    {
        case 1:
        {
            HR hr;
            hr.set_employee_data(1, "Purna", "delivery", 1);
            hr.schedule_interview();
            hr.recruite_candidate(1, "Purna", "delivery", 1);
            break;
        }
        case 2:
        {
            Finance f;
            f.set_employee_data(1, "Purna", "delivery", 1);
            f.credit_salary();
            f.raise_reimbursement("Internet", 800);
            break;
        }
        case 3:
        {
            Support s;
            int id;
            s.set_employee_data(1, "Purna", "delivery", 1);
            id = s.raise_ticket("Unable to access camera");
            s.resolve_ticket(id);
            id = s.raise_ticket("Replace battery");
            s.resolve_ticket(id);
            break;
        }
    }
    return 0;
}