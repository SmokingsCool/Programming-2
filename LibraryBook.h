/* 
 * File:   LibraryBook.h
 * Author: SmokingsCool
 *
 * Created on 16 March 2015, 01:36
 */

#ifndef LIBRARYBOOK_H
#define	LIBRARYBOOK_H

class LibraryBook{
    protected:
        long classification;
        enum status;
    public:
        LibraryBook(char*,char*,long);
        long getClassification();
        enum status;
};

#endif	/* LIBRARYBOOK_H */

