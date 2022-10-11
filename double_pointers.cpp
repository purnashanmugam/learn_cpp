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