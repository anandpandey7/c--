/*
What is OOPs?
As the name suggests uses objects in programming.OOPs aim to implement real world entities like inheritance,hidding,
polymorphism etc in programming.The main aim of OOPs is to bind together the data & the functions that operate on them
so that no other part of the code can accesss this data except the function.

There are some basic concepts that act as the building blocks of OOPs i.e.

Class
Objects
Encapsulation
Abstraction
Polymorphism
Inheritance
Dynamic Binding
Message Passing

Class
The building block of C++ that leads to Object Oriented Programming is a Class. It is a user defined data type, which holds its
own data member and member function, which can be accessed and used by creating instance of class. 


////////////////   love babbar Notes   //////////////

1byte of memmory is allocated in case of empity class;for identification

for using class from another file use
#include "Filename.cpp".....

for access properties/ Data member use "."operator.. dot operator

Access moidifier(3)
.private(by default)
 only can be access inside the class
.public
 it can be access outside the class
.protected

concept of getter / setter (used in Private)
these are the functions through which you can access prive data members

.....
Structure Padding..........
Structure padding is a concept in C that adds the one or more empty bytes between the memory addresses to
align the data in memory.The processor does not read 1 byte at a time. It reads 1 word at a time.

What does the 1 word mean?

If we have a 32-bit processor, then the processor reads 4 bytes at a time, which means that 1 word is equal to 4 bytes.
https://www.javatpoint.com/structure-padding-in-c

GREEDY ALIGNMENT...........
Greedy alignment is a technique used to minimize padding by ordering the data members of a class in decreasing order of size.
This ensures that the largest data members are placed first in the class, minimizing the amount of padding required to align
the subsequent data members


.........  CONSTRUCTOR  .............
Constructor in C++ is a special method that is invoked automatically at the time of object creation. It is used to initialize 
the data members of new objects generally. The constructor in C++ has the same name as the class or structure. It constructs 
the values i.e. provides data for the object which is why it is known as constructor.

• Constructor is a member function of a class, whose name is same as the class name.
• Constructor is a special type of member function that is used to initialize the data members for an object of a class 
  automatically, when an object of the same class is created.
• Constructor is invoked at the time of object creation. It constructs the values i.e. provides data for the object that 
  is why it is known as constructor.
• Constructor do not return value, hence they do not have a return type.

this keyword(Actually Pointer) stores the address of current object
if only one copy of each member function exists and is used by multiple objects, how are the proper data members are accessed 
and updated? The compiler supplies an implicit pointer along with the names of the functions as ‘this’.
The ‘this’ pointer is passed as a hidden argument to all nonstatic member function calls and is available as a local variable 
within the body of all nonstatic functions. ‘this’ pointer is not available in static member functions as static member 
functions can be called without any object (with class name).

*/

#include<iostream>
using namespace std;
class hero{
    //properties
    private:
    int health;

    public:
    char level;

    // constructor
    hero()
    {
        cout << "Constructor Called" << endl;
    }

    int gethealth()
    {
        return health;
    }

    int getlevel()
    {
        return level;
    }

    int sethealth(int h)
    {
        health =h;
    }

    int setlevel(char ch)
    {
        level =ch;
    }

};

int main()
{
    // // //creation of object
    // // hero ramesh ;
    // // cout<<"Ramesh health is :"<< ramesh.gethealth() <<endl;
    // // ramesh.sethealth(40);
    // // ramesh.level = 'A';
    // // cout<<"Ramesh health is :"<< ramesh.gethealth() <<endl;
    // // cout<<"Ramesh level is :"<< ramesh.level <<endl;

    // // static allocation
    // hero a;
    // a.sethealth(50);
    // a.setlevel('A');
    // cout << "Level is :" << a.level << endl;
    // cout << "Health is :" << a.gethealth() << endl;

    // // dynamic allocation

    // hero *b = new hero;
    // b->setlevel('B');
    // b->sethealth(70);
    // cout << "Level is :" << (*b).level << endl;
    // cout << "Health is :" << (*b).gethealth() << endl;

    // cout << "Level is :" << b->level << endl;
    // cout << "Health is :" << b->gethealth() << endl;

    hero ramesh;

    hero *a= new hero;
    
    return 0;
}