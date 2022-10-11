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