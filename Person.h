#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
protected:
    int id;
    string name;

public:
    Person(int id, string name) {
        this->id = id;
        this->name = name;
    }

    string getName() {
        return name;
    }

    virtual ~Person() {}
};

#endif
