#ifndef USER_H
#define USER_H

#include "Person.h"
#include <string>
using namespace std;

class User : public Person {
private:
    string email;

public:
    User(int id, string name, string email)
        : Person(id, name) {
        this->email = email;
    }

    string getEmail() {
        return email;
    }
};

#endif
