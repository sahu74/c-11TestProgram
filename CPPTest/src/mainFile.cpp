#include "Person.h"
#include "MyHashFunction.h"
// CPP program to demonstrate working of unordered_map
// for user defined data types.
#include <bits/stdc++.h>
using namespace std;
// Driver code
int main()
{
    unordered_map<Person, int, MyHashFunction> um;
    Person p1("kartik", "kapoor");
    Person p2("Ram", "Singh");
    Person p3("Laxman", "Prasad");

    um[p1] = 100;
    um[p2] = 200;
    um[p3] = 100;

    for (auto e : um) {
        cout << "[" << e.first.getFirst() << ", "
             << e.first.getLast()
             << "] = > " << e.second << '\n';
    }

    return 0;
}
