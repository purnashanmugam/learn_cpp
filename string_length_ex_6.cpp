/*
Write a function that returns the length of a string (char *), excluding the final NULL character. It should not use any standard-library functions. You may use arithmetic and dereference operators, but not the indexing operator ([]).
*/
#include <iostream>
#include <string>
using namespace std;
#define MAX_LENGTH 10
int string_length(char *str)
{
    int i;
    for(i=0;*(str+i)!=0;i++);
    return i;
}

int main () {
    char s[] = "purna";
    char *mystr = s;
    int length;
    length = string_length(s);
    cout << "Length of the string: " << length;
    return 0;
}