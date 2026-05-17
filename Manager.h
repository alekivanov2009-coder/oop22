#ifndef MANAGER_H
#define MANAGER_H

#include "Person.h"
#include "Project.h"

class Manager : public Person {
public:
    Manager(int id, string name) : Person(id, name) {}

    Project createProject(int id, string name, string description);
};

#endif
