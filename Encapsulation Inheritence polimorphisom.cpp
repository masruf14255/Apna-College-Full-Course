/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

//Encapsulation - Object Oriented Programming | Lecture 21.2

Encapsulation

Hiding “sensitive” data from the user. Encapsulation is achieved in C++ using
Classes.

Classes have two main components:
1. Data Members
2. Member Function

Access Modifiers:
Access modifiers are keywords in object-oriented languages that set the
accessibility of classes, methods, and other members. Access modifiers are used
to facilitate the encapsulation of components.
There are 3 types of Access Modifiers:
1. Public: Class objects can access the data members and function outside the
class.
2. Private: Objects cannot access the data members and function outside the
class. These members can only be accessed inside the class.
3. Protected: Objects cannot access the data members and function outside
the class. These members can be accessed inside the class and inherited
class.

Advantages of Encapsulation:
- Good coding practice, useful in interviews
- Increased security of data

#include <iostream>
using namespace std;
class A {
public:
int a;
void funcA() {
cout << "Func A\n";
}
private:
int b;
void funcB() {
cout << "Func B\n";
}
protected:
int c;
void funcC() {
cout << "Func C\n";
}
};
int main() {
A obj;
obj.funcA();
obj.funcB();
}

// Inheritance in OOP's | C++ Placement Course | Lecture 21.3

// polimorphisom
