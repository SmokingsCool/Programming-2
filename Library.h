/* 
 * File:   Library.h
 * Author: SmokingsCool
 *
 * Created on 16 March 2015, 16:31
 */

#ifndef LIBRARY_H
#define	LIBRARY_H
#include <vector>
#include "Borrower.h"
#include "LibraryBook.h"
using namespace std;
class Library{
    protected:
        vector<Borrower> userCollection;
        vector<LibraryBook> bookCollection;
        
    public:
        Library();
        void borrowBook(Borrower,LibraryBook);
        void returnBook(Borrower,LibraryBook);
        vector<LibraryBook> getBooks();
        
    
};

#endif	/* LIBRARY_H */

