/* 
 * File:   Borrower.h
 * Author: SmokingsCool
 *
 * Created on 16 March 2015, 06:59
 */

#ifndef BORROWER_H
#define	BORROWER_H
#include <vector>
using namespace std;
class Borrower{
    protected:
        char address [];
        char name [];
        long charID;
        vector<Book> borrowed;
        vector<LibraryBook> currentlyBorrowed;
    public:
        void borrowNewBook(LibraryBook);
        void returnBook(LibraryBook);
        Borrower(char*,char*,long);
        char* getAddress();
        char* getName();
        long getcharID();
        void setAddress(char []);
        void setName(char []);
        long setcharID(long);
};

#endif	/* BORROWER_H */

