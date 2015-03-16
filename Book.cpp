/* 
 * File:   Book.cpp
 * Author: SmokingsCool
 * 
 * Created on 15 March 2015, 22:17
 */

#include <cstring>
#include <iostream>
class Book{
    private:
        char Author [];
        char Title [];
        int numberOfPages;
    public:
        
        Book(char[],char[]);
        
        operator>(Book);
        operator<(Book);
        operator==(Book);
        
        void setAuthor(char[]);
        void setTitle(char[]);
        char* getAuthor();
        char* getTitle();
    
    
};
Book::Book(char author[], char  title[]) {
    
    strcpy(Author,author);
    strcpy(Title,title);
    int sizeAuthor = strlen(Author);
    
};


Book::operator>(Book book){
    
    if (strcmp(book.getAuthor(),Author) == 0){
        if (strcmp(book.getTitle(),Title) > 0){
            return true;
        }
        else {
            return false;
        }
    }
    if (strcmp(book.getAuthor(),Author) > 0){
        return true;
    }
    else {
        return false;
    }
};
Book::operator<(Book book){
    
    if (strcmp(book.getAuthor(),Author) == 0){
        if (strcmp(book.getTitle(),Title) < 0){
            return true;
        }
        else {
            return false;
        }
    }
    if (strcmp(book.getAuthor(),Author) < 0){
        return true;
    }
    else {
        return false;
    }
};

Book::operator==(Book book){
    
    if (strcmp(book.getAuthor(),Author) == 0 && strcmp(book.getTitle(),Title) == 0){
        return true;
    }
    else {
        return false;
    }
}
inline istream& operator>>(istream& is, Book book)
{

}

void Book::setAuthor(char newValue []){
    strcpy(Author,newValue);
};
void Book::setTitle(char newValue []){
    strcpy(Title,newValue);
};
char* Book::getAuthor(){
    return Author;
};
char* Book::getTitle(){
    return Title;
};