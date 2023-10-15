#include"libraries.h"

class Book{
    protected:
        string title;
        string authorName;

public:
    string getTitle();
    void setTitle(string title);
    string getAuthorName();
    void setAuthorName(string authorName);
    Book(string title, string authorName);
    void printDescription();
};