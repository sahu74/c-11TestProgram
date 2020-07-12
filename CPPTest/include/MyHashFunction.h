#ifndef MYHASHFUNCTION_H_INCLUDED
#define MYHASHFUNCTION_H_INCLUDED

class MyHashFunction {
public:

    // Use sum of lengths of first and last names
    // as hash function.
    size_t operator()(const Person& p) const
    {
        return p.getFirst().length() + p.getLast().length();
    }
};

#endif // MYHASHFUNCTION_H_INCLUDED


