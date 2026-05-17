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

    vector<Comment> comments;

public:
    Task(int id, string title, string description, int priority) {
        this->id = id;
        this->title = title;
        this->description = description;
        this->priority = priority;
        this->status = "NEW";
    }

    void changeStatus(string newStatus) {
        status = newStatus;
    }

    void addComment(Comment comment) {
        comments.push_back(comment);
    }

    string getTitle() {
        return title;
    }

    string getStatus() {
        return status;
    }
};

#endif
