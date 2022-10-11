#include<iostream>
using namespace std;
int main()
{
    char *oddOrEven = "Never odd or even";
    char *nthCharPtr = &oddOrEven[5];
    cout << nthCharPtr << endl;
    nthCharPtr--;
    nthCharPtr--;
    cout << nthCharPtr << endl;
    char **pointerPtr = &nthCharPtr;
    nthCharPtr++;
    cout << *pointerPtr << endl;
    cout << nthCharPtr << endl;
    cout << nthCharPtr-oddOrEven;
}