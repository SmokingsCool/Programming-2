#include <vector>
#include <cstring>
#include "LibraryBook.h"
#include <iostream>

using namespace std;
class Borrower{
    protected:
        string address ;
        string name ;
        long charID;
        vector<LibraryBook> borrowed;
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
        istream operator>>(istream, Borrower);
};
void Borrower::borrowNewBook(LibraryBook newBook){
    if (newBook.getStatus() ==2 && borrowed.size() != 3){
        borrowed.push_back(newBook);
    }
};
void Borrower::returnBook(LibraryBook returnedBook){
    for (vector<LibraryBook>::iterator iter = borrowed.begin();
            iter != borrowed.end();iter++){
        if (*iter.getClassification() == returnedBook.getClassification())
        {
            borrowed.erase(iter);
        }
    }
    returnedBook.setStatus(LibraryBook::status.ON_LOAN);
    currentlyBorrowed.push_back(returnedBook);
};
Borrower::Borrower(string firstAddress ,string firstName, long firstcharID){
    address = firstAddress;
    name = firstName;
    charID = firstcharID;
};
string Borrower::getAddress(){
    return address;
};
string Borrower::getName(){
    return name;
};
long Borrower::getcharID(){
    return charID;
};
void Borrower::setAddress(string newValue){
    address = newValue;
};
void Borrower::setName(string newValue){
    name = newValue;
};
void Borrower::setcharID(long newValue){
    charID = newValue;
};
istream Borrower::operator>>(istream &input, Borrower &b){
    long nwcharID;
    string nwName;
    string nwaddress;
    input >> nwcharID >>" " >> nwName>>" : ">> nwaddress;
}
