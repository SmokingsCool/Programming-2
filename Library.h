/* 
 * File:   Library.h
 * Author: SmokingsCool
 *
 * Created on 16 March 2015, 16:31
 */

#ifndef LIBRARY_H
#define	LIBRARY_H
#include <vector>
using namespace std;
class Library{
    protected:
        vector<Borrower> userCollection;
        vector<LibraryBook> bookCollection;
        
    public:
        Library();
        borrowBook(Borrower,LibraryBook);
        returnBook(Borrower,LibraryBook);
        
    
};

#endif	/* LIBRARY_H */

