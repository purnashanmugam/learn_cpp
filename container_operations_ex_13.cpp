/*
Use important operations of each of the STL container classes and write code to perform search, reverse, forward traverse and print, backward traverse and print, go to a given position in the container and print.
*/
#include <iostream>
#include <iterator>
#include <vector>
#include <list>
#include <deque>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Vector\n";
    vector<int> v = {1, 2, 3, 4, 5};
	vector<int>::iterator ptr;
    auto it = find(v.begin(), v.end(), 5);
    cout << "Search: " << it - v.begin() << "\n";
    reverse(v.begin(), v.end());
    cout << "Reverse: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    cout << "Forward traverse: ";
    for (ptr = v.begin(); ptr != v.end(); ptr++)
        cout << *ptr << " ";
    cout << endl;
    cout << "Backward traverse: ";
    for (auto ptr1 = v.rbegin(); ptr1 != v.rend(); ptr1++)
        cout << *ptr1 << " ";
    cout << endl;
    cout << "Element at position 3: ";
    cout << v.at(3) << endl;

    cout << "List\n";
    list<int> l={1, 2, 3, 4, 5};
	list<int>::iterator ptr2;
    l.reverse();
    cout << "Reverse: ";
    for (ptr2 = l.begin(); ptr2 != l.end(); ptr2++)
        cout << *ptr2 << " ";
    cout << endl;
    cout << "Forward traverse: ";
    for (ptr2 = l.begin(); ptr2 != l.end(); ptr2++)
        cout << *ptr2 << " ";
    cout << endl;
    cout << "Backward traverse: ";
    for (auto ptr2 = v.rbegin(); ptr2 != v.rend(); ptr2++)
        cout << *ptr2 << " ";
    cout << endl;

    cout << "Deque\n";
    deque<int> d = {1, 2, 3, 4, 5};
	deque<int>::iterator ptr3;
    deque<int>::iterator itr;
    itr = find(d.begin(), d.end(), 5);
    cout << itr - d.begin() << "\n";
    
    cout << "Forward traverse: ";
    for (ptr3 = d.begin(); ptr3 != d.end(); ptr3++)
        cout << *ptr3 << " ";
    cout << endl;
    /*
    cout << "Backward traverse: ";
    for (auto ptr3 = d.rbegin(); ptr3 != v.rend(); ptr3++)
        cout << *ptr3 << " ";
    cout << endl;
    */
    cout << "Element at position 3: ";
    cout << d.at(3) << endl;
    
    cout << "Map\n";
    map<int, int> mp;
    map<int, int>::iterator map_it;
    mp.insert({ 1, 30 });
    mp.insert({ 2, 40 });
    mp.insert({ 3, 60 });
    mp.insert({ 4, 20 });
    mp.insert({ 5, 50 });
    map_it = mp.find(2);
    cout << "Search: " << map_it->first << "\t" << map_it->second;
    
    cout << "Forward traverse: ";
    for (map_it = mp.begin(); map_it != mp.end(); map_it++)
        cout << map_it->first << "\t" << map_it->second << " ";
    cout << endl;
    cout << "Backward traverse: ";
    for (auto map_it1 = mp.rbegin(); map_it1 != mp.rend(); map_it1++)
        cout << map_it1->first << "\t" << map_it1->second << " ";
    cout << endl;
    
    cout << "Element at key 3: ";
    cout << mp.at(3) << endl;
    
}