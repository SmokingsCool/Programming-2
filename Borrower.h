/* 
 * File:   Borrower.h
 * Author: SmokingsCool
 *
 * Created on 16 March 2015, 06:59
 */

#ifndef BORROWER_H
#define	BORROWER_H
#include <vector>
#include "LibraryBook.h"
using namespace std;
class Borrower{
    protected:
        string address;
        string name ;
        long charID;
        vector<Book> borrowed;
        vector<LibraryBook> currentlyBorrowed;
    public:
        void borrowNewBook(LibraryBook);
        void returnBook(LibraryBook);
        Borrower(string,string,long);
        string getAddress();
        string getName();
        long getcharID();
        void setAddress(string);
        void setName(string);
        void setcharID(long);
        friend istream &operator>>(istream& , Borrower& );
        friend ostream &operator << (ostream&, Borrower&);
};

#endif	/* BORROWER_H */

