#ifndef PROJECT_H
#define PROJECT_H

#include <string>
#include <vector>
#include <algorithm>
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

    void removeTask(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks.erase(tasks.begin() + index);
        }
    }

    vector<Task>& getTasks() {
        return tasks;
    }

    string getName() {
        return name;
    }

    void filterByStatus(string status) {
        for (Task &task : tasks) {
            if (task.getStatus() == status) {
                cout << task.getTitle() << endl;
            }
        }
    }

    void sortByPriority() {
        sort(tasks.begin(), tasks.end(),
             [](Task &a, Task &b) {
                 return a.getPriority() < b.getPriority();
             });
    }

    int getProgress() {
        if (tasks.empty()) return 0;

        int done = 0;

        for (Task &task : tasks) {
            if (task.getStatus() == "DONE") {
                done++;
            }
        }

        return (done * 100) / tasks.size();
    }
};

#endif
