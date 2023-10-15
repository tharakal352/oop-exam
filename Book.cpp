#include"Book.h"

Book::Book(string title, string authorName):title(title), authorName(authorName)
{}

string Book:: getTitle(){
    return this->title;
}

void Book::setTitle(string title)
{
   this->title =title;

}
string Book::getAuthorName()
{
    return this->authorName;

}
void Book::setAuthorName(string authorName)
{
    this->title=title;
}

void Book::printDescription()
{
    cout<<"book title is: "<<this->title<<endl;
    cout<<"author of the book is: "<<this->authorName<<endl;
}
