#ifndef PERSON_H
#define PERSON_H

// CPP program to demonstrate working of unordered_map
// for user defined data types.
#include <bits/stdc++.h>
using namespace std;
class Person
{
    public:
        Person(string f, string l);
        virtual ~Person();
    // Match both first and last names in case
    // of collisions.
    bool operator==(const Person& p) const;
    string getFirst()const {return first;}
    string getLast() const {return last;}
    protected:

    private:
    string first, last;  // First and last names
};


#endif // PERSON_H
