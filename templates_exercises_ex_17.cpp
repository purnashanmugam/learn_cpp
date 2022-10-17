/*
The class ZooAnimal is going to become a Class Template.  Declare
a class template with a single template type parameter weightType.
Declare the data name weight to be of whatever type is used for
weightType.  Make the last parameter to the constructor function to be
of weightType.  The constructor function is not in the body of class
template ZooAnimal.  Modify it so that it shows that this is the
constructor function for the class template ZooAnimal with template
type parameter weightType.

   class ZooAnimal  
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      ZooAnimal (char*, int, int, int); // constructor function
      inline ~ZooAnimal () { delete [] name; }; // destructor function
      void changeWeight (int pounds);
      char* reptName ();
      int reptWeight ();
      int daysSinceLastWeighed (int today);
   };

   // ---------- the constructor function
     ZooAnimal::ZooAnimal (char* who, int whichCage, int weighDay, int pounds)
   {
    char *name = new char[20];
    strcpy (name, who);
    cageNumber = whichCage;
    weightDate = weighDay;
    weight = pounds;
   }
*/
#include <iostream>
#include <string.h>
using namespace std;
template <class weightType>
class ZooAnimal  
{
    private:
    char *name;
    int cageNumber;
    int weightDate;
    int weight;
    public:
    ZooAnimal (char*, int, int, int); // constructor function
    inline ~ZooAnimal () { delete [] name; }; // destructor function
    void changeWeight (int pounds);
    char* reptName ();
    int reptWeight ();
    int daysSinceLastWeighed (int today);
};

// ---------- the constructor function
template <class weightType>
ZooAnimal<weightType>::ZooAnimal (char* who, int whichCage, int weighDay, int pounds)
{
    char *name = new char[20];
    strcpy (name, who);
    cageNumber = whichCage;
    weightDate = weighDay;
    weight = pounds;
}