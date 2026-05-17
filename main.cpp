#include <iostream>
#include "Manager.h"

using namespace std;

int main() {

    Manager manager(1, "Ivan");

    Project project = manager.createProject(1, "Task System", "C++ OOP Project");

    Task t1(1, "Design", "Design classes", 1);
    Task t2(2, "Implement", "Write code", 2);

    project.addTask(t1);
    project.addTask(t2);

    project.getTasks()[0].changeStatus("IN_PROGRESS");
    project.getTasks()[1].changeStatus("DONE");

    project.getTasks()[0].addComment(Comment(1, "Started"));
    project.getTasks()[1].addComment(Comment(2, "Finished"));

    cout << "Project: " << project.getName() << endl;

    for (auto &t : project.getTasks()) {
        cout << "- Task: " << t.getTitle()
             << " | Status: " << t.getStatus() << endl;
    }

    return 0;
}
