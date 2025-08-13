#include <iostream>
#include <string>
using namespace std;

class Base {
protected:
    string name;
    string location;
public:
    Base(string n, string l) {
        name = n;
        location = l;
        cout << "Base class constructor is called" << endl;
    }
};

class child1 : public Base {
protected:
    string country;
    int id;
public:
    child1(string country, int id, string name, string location)
        : Base(name, location) // Call Base's parameterized constructor
    {
        this->country = country;
        this->id = id;
        cout << "child1 class is called" << endl;
    }
};

class child2 : public child1 {
protected:
    string asia;
public:
    child2(string a, string country, int id, string name, string location)
        : child1(country, id, name, location)
    {
        asia = a;
        cout << "Child2 class constructor is called" << endl;
    }
};

int main() {
    child2 obj1("Asia", "Nepal", 1234, "Bikash", "Dhangadi");
    return 0;
}
