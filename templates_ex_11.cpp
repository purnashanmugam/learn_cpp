/*
Write a class template function “search” that searches the first element of a storage container that contains the value  “element”. Use this function to search in data in vector, lists, queue and deque storage class for a element.
*/

#include<iostream>
#include<iterator> // for iterators
#include<vector> // for vectors
#include <list> // for lists
#include <deque> // for queue
using namespace std;

template <typename Container, typename T>
void search(Container &c, T n) 
{
    typedef typename Container::iterator Iter;

    for(Iter p = c.begin(); p != c.end(); ++p)
    {
        if(*p == n)
        {
            cout << n << " is present\n";
            return;
        }
    }
    cout << n << " is not present\n";
}

int main()
{
	vector<int> ar = { 1, 2, 3, 4, 5 };
    list<int> l = {1, 2, 3, 4, 5};
    deque<int> q = {1, 2, 3, 4, 5};
    int n;
    cout << "Enter a number from 1 to 5\n";
    cin >> n;
    cout << "Iterating over vector\n";
    search(ar, n);
    cout << "Iterating over list\n";
    search(l, n);
    cout << "Iterating over deque\n";
    search(q, n);
	return 0;	
}