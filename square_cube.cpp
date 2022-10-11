// C++ implementation to print square and cube
#include <iostream>
using namespace std;

void square(int&);
void cube(int&);

int main()
{
    int n, n_square;
    int &ref_n = n;
    cout << "Enter a number\n";
    cin >> n;
    square(ref_n);
    cout << "Square: "<< ref_n << endl;
    cube(n);
    cout << "Cube: " << n << endl;
    return 0;
}
void square(int &ref_n)
{
    //cout << "Square: " << n*n << endl;
    ref_n = ref_n*ref_n;
}
void cube(int &n)
{
    //cout << "Cube: " << n*n*n << endl;
    n = n*n*n;
}