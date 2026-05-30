#ifndef TASK_H
#define TASK_H

#include <string>
#include <vector>
#include "Comment.h"

using namespace std;

class Task {
private:
    int id;
    string title;
    string description;
    string status;
    int priority;
    string assignedUser;

    vector<Comment> comments;

public:
    Task(int id, string title, string description, int priority) {
        this->id = id;
        this->title = title;
        this->description = description;
        this->priority = priority;
        this->status = "NEW";
        this->assignedUser = "Unassigned";
    }

    void changeStatus(string newStatus) {
        status = newStatus;
    }

    void addComment(Comment comment) {
        comments.push_back(comment);
    }

    void assignTo(string userName) {
        assignedUser = userName;
    }

    string getAssignedUser() {
        return assignedUser;
    }

    string getTitle() {
        return title;
    }

    string getStatus() {
        return status;
    }

    int getPriority() {
        return priority;
    }

    vector<Comment>& getComments() {
        return comments;
    }
};

#endif
