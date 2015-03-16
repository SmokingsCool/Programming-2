/* 
 * File:   Book.h
 * Author: SmokingsCool
 *
 * Created on 15 March 2015, 22:17
 */

#ifndef BOOK_H
#define	BOOK_H
#include <cstring>
#include<string>
using namespace std;
class Book {
protected:
    string Author;
    string Title;
    int numberOfPages;
public:
    
    Book(string, string );
    inline bool operator>(Book);
    inline bool operator<(Book);
    inline bool operator==(Book);
    void setAuthor(string);
    void setTitle(string);
    string getAuthor();
    string getTitle();
    void setPages(int);
    int getPages();
};
#endif	/* BOOK_H */

