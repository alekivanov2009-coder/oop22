#include <iostream>
#include "Manager.h"
#include "User.h"

using namespace std;

int main() {

    Manager manager(1, "Ivan");
    User user1(2, "Maria", "maria@email.com");

    Project project =
        manager.createProject(
            1,
            "Task Manager",
            "OOP Project"
        );

    Task t1(1, "Design", "Create diagram", 1);
    Task t2(2, "Implementation", "Write code", 2);
    Task t3(3, "Testing", "Test system", 3);

    t1.assignTo(user1.getName());
    t1.changeStatus("DONE");
    t1.addComment(Comment(1, "Finished successfully"));

    t2.changeStatus("IN_PROGRESS");

    t3.changeStatus("NEW");

    project.addTask(t1);
    project.addTask(t2);
    project.addTask(t3);

    cout << "Project: " << project.getName() << endl;
    cout << endl;

    cout << "All tasks:" << endl;

    for (Task &task : project.getTasks()) {
        cout
            << task.getTitle()
            << " | Status: " << task.getStatus()
            << " | Priority: " << task.getPriority()
            << " | Assigned to: " << task.getAssignedUser()
            << endl;
    }

    cout << endl;
    cout << "Done tasks:" << endl;
    project.filterByStatus("DONE");

    cout << endl;
    project.sortByPriority();

    cout << "Progress: "
         << project.getProgress()
         << "%"
         << endl;

    return 0;
}
