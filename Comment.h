#ifndef COMMENT_H
#define COMMENT_H

#include <string>
using namespace std;

class Comment {
private:
    int id;
    string text;

public:
    Comment(int id, string text) {
        this->id = id;
        this->text = text;
    }

    string getText() {
        return text;
    }
};

#endif
