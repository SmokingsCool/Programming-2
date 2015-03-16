#include <iostream>
using namespace std;

class LibraryBook : public Book{
    
    protected: 
        string classification;
        
    public:
        enum status {ON_LOAN, AVAILABLE_FOR_LENDING,REFERENCE_ONLY};
        status thisStatus;
        istream operator>>(istream, LibraryBook );
        LibraryBook(char*,char*,long);
        string getClassification();
        void setClassification(string);
        void setStatus();
        status getStatus();
    
    
};
LibraryBook :: LibraryBook(char* author,char*title,long classif){
    strcpy(Author,author);
    strcpy(Title,title);
    int sizeAuthor = strlen(Author);
    status.AVAILABLE_FOR_LENDING;
    }
void LibraryBook::setClassification(string newValue){
    classification = newValue;
}
string LibraryBook::getClassification(){
    return classification;
}
void LibraryBook::setStatus(status newStatus){
    thisStatus = newStatus;
}
int LibraryBook::getStatus(){
    return thisStatus;
}
istream LibraryBook:: operator>>(istream &input, LibraryBook &b){
    string title;
    string author;
    int pages;
    status bookStatus;
    string inputClassification;
    input >> title >> ", \"" >> author >> "\" (" >> pages>>" pp.) ["
            >>inputClassification>>" ">>bookStatus>>"\n";
    b.setTitle(title);
    b.setAuthor(author);
    b.setPages(pages);
    b.setClassification(inputClassification);
    b.setStatus(bookStatus);
}