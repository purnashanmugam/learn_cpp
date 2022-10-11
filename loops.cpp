// C++ program to illustrate need of loops
#include <iostream>
using namespace std;

int main()
{
    //for loop
    for (int i = 1; i <= 10; i++)
    {
        cout << "Hello World\n";
    }

    //while loop
    int i = 1;
    while (i < 6)
    {
        cout << "Hello World\n";
        i++;
    }

    //do while 
    i = 2; 
 
    do
    {
        cout << "Hello World\n";
        i++;
 
    }  while (i < 1); 
	return 0;
}
