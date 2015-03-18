/* 
 * File:   LibraryBook.h
 * Author: ppr13epu
 *
 * Created on 18 March 2015, 18:17
 */


#ifndef LIBRARYBOOK_H
#define	LIBRARYBOOK_H
#include <cstring>
#include <iostream>
#include "Book.h"
using namespace std;
class LibraryBook : public Book{
    protected:
        string classification;
        
    public:
        enum status {ON_LOAN = 1, AVAILABLE_FOR_LENDING = 2,REFERENCE_ONLY = 3};
        status thisStatus;
        LibraryBook(Book &b,string classifications) : 
        Book(b.getTitle(), b.getAuthor()){
            this->classification = classifications;
        }
        string getClassification();
        void setClassification(string);
        friend istream &operator>>(istream&, LibraryBook&);
        friend ostream &operator << (ostream&, LibraryBook&);
      
        void setStatus(int);
        int getStatus();        
};

#endif	





