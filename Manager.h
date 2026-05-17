#ifndef MANAGER_H
#define MANAGER_H

#include "Person.h"
#include "Project.h"

using namespace std;

class Manager : public Person {
public:
    Manager(int id, string name) : Person(id, name) {}

    // Създава нов проект
    Project createProject(int id, string name, string description) {
        Project project(id, name, description);
        return project;
    }
};

#endif
