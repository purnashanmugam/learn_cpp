/*
Create a vector of integers, copy it to list, reversing as you do so, then copy the selected items into another vector
*/
#include <iostream>
#include <iterator>
#include <vector>
#include <list>

using namespace std;
template <typename T>
void print(T t)
{
    typedef typename T::iterator it;
    for(it i = t.begin(); i != t.end(); i++)
    {
        cout << *i;
    }
    cout << "\n";
}
int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    print(v1);
    list<int> l1(v1.rbegin(), v1.rend());
    print(l1);
    vector<int> v2(l1.begin(), l1.end());
    print(v2);
}

