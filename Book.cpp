/* 
 * File:   Book.cpp
 * Author: SmokingsCool
 * 
 * Created on 15 March 2015, 22:17
 */

#include <cstring>
#include <iostream>
#include <string>
using namespace std;
class Book{
    protected:
        string Author;
        string Title;
        int numberOfPages;
    public:
        
        Book(string,string);
        
        inline bool operator>(Book);
        inline bool operator<(Book);
        inline bool operator==(Book);
        
        void setAuthor(string);
        void setTitle(string);
        string getAuthor();
        string getTitle();
        int getPages();
        void setPages(int);
    
};
Book::Book(string author, string title) {
    Author = author;
    Title = title;
    int sizeAuthor = strlen(Author.c_str());
    
};
inline bool Book::operator>(Book book){
    
    if (strcmp(book.getAuthor().c_str(),Author.c_str()) == 0){
        if (strcmp(book.getTitle().c_str(),Title.c_str()) > 0){
            return true;
        }
        else {
            return false;
        }
    }
    if (strcmp(book.getAuthor().c_str(),Author.c_str()) > 0){
        return true;
    }
    else {
        return false;
    }
};
inline bool Book::operator<(Book book){
    
    if (strcmp(book.getAuthor().c_str(),Author.c_str()) == 0){
        if (strcmp(book.getTitle().c_str(),Title.c_str()) < 0){
            return true;
        }
        else {
            return false;
        }
    }
    if (strcmp(book.getAuthor().c_str(),Author.c_str()) < 0){
        return true;
    }
    else {
        return false;
    }
};
inline bool Book::operator==(Book book){
    
    if (strcmp(book.getAuthor().c_str(),Author.c_str()) == 0 && strcmp(book.getTitle().c_str(),Title.c_str()) == 0){
        return true;
    }
    else {
        return false;
    }
}
void Book::setAuthor(string newValue){
    Author = newValue;
};
void Book::setTitle(string newValue){
    Title = newValue;
};
string Book::getAuthor(){
    return Author;
};
string Book::getTitle(){
    return Title;
};
int Book::getPages(){
    return numberOfPages;
}
void Book::setPages(int newValue){
    numberOfPages = newValue;
}