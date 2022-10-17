/*
Create a vector for integers. Look for a value in that vector - Use iterator to loop
*/
#include<iostream>
#include<iterator> // for iterators
#include<vector> // for vectors
using namespace std;
int main()
{
	vector<int> ar = { 1, 2, 3, 4, 5 };
	
	// Declaring iterator to a vector
	vector<int>::iterator ptr;
    int n;
	
	// Displaying vector elements using begin() and end()
	cout << "Enter a number from 1 to 5\n";
    cin >> n;
	for (ptr = ar.begin(); ptr < ar.end(); ptr++)
    {
        if(*ptr == n)
        {
            cout << "Present";
            return 0;
        }
    }	
	return 0;	
}
