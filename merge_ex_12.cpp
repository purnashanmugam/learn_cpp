/*
See the following arrays and list. Merge these two into a deque d and print the elements from first to end and reverse order.
"int main() {
4 char one[] = {1,2,3,4,5};
5 int two[] = {0,2,4,6,8};
6 std::list<int> l (&two[0],&two[5]);
7 std::deque<long> d(10);"
*/
#include <iostream>
#include <iterator>
#include <vector>
#include <list>
#include <deque>
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
    int one[] = {1,2,3,4,5};
    int two[] = {0,2,4,6,8};
    list<int> l(&two[0],&two[5]);
    print(l);
    list<int> l2(&one[0], &one[5]);
    print(l2);
    l.merge(l2);
    print(l);
    deque<long> d(l.begin(), l.end());
    print(d);
}