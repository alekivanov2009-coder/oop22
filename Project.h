#ifndef PROJECT_H
#define PROJECT_H

#include <string>
#include <vector>
#include "Task.h"

using namespace std;

class Project {
private:
    int id;
    string name;
    string description;

    vector<Task> tasks;

public:
    Project(int id, string name, string description) {
        this->id = id;
        this->name = name;
        this->description = description;
    }

    void addTask(Task task) {
        tasks.push_back(task);
    }

    vector<Task>& getTasks() {
        return tasks;
    }

    string getName() {
        return name;
    }
};

#endif
