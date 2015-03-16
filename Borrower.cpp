#include <vector>
using namespace std;
class Borrower{
    protected:
        char address [];
        char name [];
        long charID;
        vector<LibraryBook> borrowed;
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
void Borrower::borrowNewBook(LibraryBook newBook){
    borrowed.push_back(newBook);
};
void Borrower::returnBook(LibraryBook returnedBook){
    for (int i = 0; i < borrowed.size();i++){
        if (borrowed[i].getClassification() == returnedBook.getClassification())
        {
            borrowed.erase(i);
        }
    }
    currentlyBorrowed.push_back(returnedBook);
};
Borrower::Borrower(char firstAddress [],char firstName [], long firstcharID){
    strcpy(address,firstAddress);
    strcpy(name,firstName);
    charID = firstcharID;
};
char* Borrower::getAddress(){
    return address;
};
char* Borrower::getName(){
    return name;
};
long Borrower::getcharID(){
    return charID;
};
void Borrower::setAddress(char newValue[]){
    strcpy(address,newValue);
};
void Borrower::setName(char newValue[]){
    strcpy(name,newValue);
};
void Borrower::setcharID(long newValue){
    charID = newValue;
};

