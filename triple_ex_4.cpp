//c++ implementation to triple a number
//Write code to triple the given number. Pass the user input to a function triple(int) which triples the number and returns. How will you pass the number to the function that will return back the tripled number to the main? 
#include <iostream>
using namespace std;
void triple(int &n)
{
    n = n*n*n;
}
int main()
{
    int n;
    cout << "Enter a number";
    cin >> n;
    triple(n);
    cout << "Triple: " << n << endl;
}