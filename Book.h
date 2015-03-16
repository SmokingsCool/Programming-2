/* 
 * File:   Book.h
 * Author: SmokingsCool
 *
 * Created on 15 March 2015, 22:17
 */

#ifndef BOOK_H
#define	BOOK_H

class Book {
protected:
    char Author;
    char Title;
    int numberOfPages;
public:
    
    Book(char [] , char [] );
    operator>(Book);
    operator<(Book);
    operator==(Book);
    setAuthor();
    setTitle();
    getAuthor();
    getTitle();
    
};
#endif	/* BOOK_H */

