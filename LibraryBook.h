/* 
 * File:   LibraryBook.h
 * Author: SmokingsCool
 *
 * Created on 16 March 2015, 01:36
 */

#ifndef LIBRARYBOOK_H
#define	LIBRARYBOOK_H
#include <cstring>
#include "Book.h"
using namespace std;
class LibraryBook : public Book{
    protected:
        string classification;
        
    public:
        enum status {ON_LOAN = 1, AVAILABLE_FOR_LENDING = 2,REFERENCE_ONLY = 3};
        status thisStatus;
        LibraryBook(string,string,long);
        string getClassification();
        void setClassification(string);
        friend istream operator>>(istream, LibraryBook );
        enum status;
        void setStatus(status);
        status getStatus();        
};

#endif	/* LIBRARYBOOK_H */

