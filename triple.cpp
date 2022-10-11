//c++ implementation to triple a number
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