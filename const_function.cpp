#include <iostream>
using namespace std;

class A
{
    int x;
    public:
    A()
    {
        x=50;
    }
    void set_data(int a)
    {
        x = a;
    }

    void get_data() const
    {
        cout << x;
    }
};

int main()
{
    A a;
    a.set_data(10);
    a.get_data();
    const A b;
    b.get_data();
}