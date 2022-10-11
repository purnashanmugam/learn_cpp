//c++ implementation to print tables
#include <iostream>
using namespace std;

void print_table(int n)
{
    for(int i=1;i<=10;i++)
    {
        cout << n << "*" << i << "=" << n*i << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter a number\n";
    cin >> n;
    print_table(n);
    return 0;
}