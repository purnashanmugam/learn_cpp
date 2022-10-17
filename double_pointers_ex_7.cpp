/*
 Write a function similar to the one in above, but instead of swapping two values, it swaps two pointers to point to each other’s values. Your function should work correctly for the following example invocation: 
int x = 5, y = 6; 2 int * ptr1 = &x, * ptr2 = & y; 3 swap (& ptr1 , & ptr2 ) ; 4 cout << * ptr1 << ’ ’ << * ptr2 ; // Prints "6 5
*/
#include<iostream>  
using namespace std;    
void swap(int **x, int **y)  
{  
 int swap;  
 swap=**x;  
 **x=**y;  
 **y=swap;  
}  
int main()   
{    
 int x=500, y=100; 
 int *ptr1 = &x;
 int *ptr2 = &y;   
 swap(&ptr1, &ptr2);  // passing value to function  
 cout<<"Value of x is: "<<x<<endl;  
 cout<<"Value of y is: "<<y<<endl;  
 return 0;  
}    