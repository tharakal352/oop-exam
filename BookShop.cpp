#include"BookShop.h"

BookShop::BookShop()
{
    
}

void BookShop::addBook()
{
    BookShop* Booklist = static_cast<BookShop*>(malloc(1000));
    for(int i=0; i<size;i++)
    {
        cout<<"add book to colection"<<endl;
        new(&Booklist[i])BookShop();
     
    }
    noOfBookdAded++;
}
BookShop::~BookShop()
{
    delete[] this->Booklist;
}
