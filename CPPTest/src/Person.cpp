#include "Person.h"

Person::Person(string f, string l)
{
    first = f;
    last = l;
}

Person::~Person()
{
    //dtor
}

bool Person::operator==(const Person& p) const
{

    return ( (this->getFirst() == p.getFirst()) && (this->getLast() == p.getLast()) );
}
