/*
Assume that the following variable declaration has already been made: 1 char * oddOrEven = " Never odd or even "; Write a single statement to accomplish each of the following tasks (assuming for each one that the previous ones have already been run). Make sure you understand what happens in each of them. 1. Create a pointer to a char value named nthCharPtr pointing to the 6th character of oddOrEven (remember that the first item has index 0). Use the indexing operator. 2. Using pointer arithmetic, update nthCharPtr to point to the 4th character in oddOrEven. 3. Print the value currently pointed to by nthCharPtr. 4. Create a new pointer to a pointer (a char **) named pointerPtr that points to nthCharPtr. 5. Print the value stored in pointerPtr. 6. Using pointerPtr, print the value pointed to by nthCharPtr. 7. Update nthCharPtr to point to the next character in oddOrEven (i.e. one character past the location it currently points to). 8. Using pointer arithmetic, print out how far away from the character currently pointed to by nthCharPtr is from the start of the string.
*/
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