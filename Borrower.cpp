#include <vector>
#include <cstring>
#include <iostream>
#include <stdlib.h>
#include "Borrower.h"
using namespace std;

void Borrower::borrowNewBook(LibraryBook newBook){
    if (newBook.getStatus() ==LibraryBook::AVAILABLE_FOR_LENDING && borrowed.size() != 3){
        borrowed.push_back(newBook);
        currentlyBorrowed.push_back(newBook);
    }
};
void Borrower::returnBook(LibraryBook returnedBook){
//    for (vector<LibraryBook>::iterator iter = borrowed.begin();
//            iter != borrowed.end();iter++){
//        if (*iter.getClassification() == returnedBook.getClassification())
//        {
//            borrowed.erase(iter);
//        }
//    }
//    returnedBook.setStatus(LibraryBook::status.ON_LOAN);
//    currentlyBorrowed.push_back(returnedBook);
    cout<< "before : \n";
    for (int i = 0; i < currentlyBorrowed.size(); i++){
        cout << "      " <<currentlyBorrowed[i];    
    }
    
    for(int i = 0; i< currentlyBorrowed.size(); i ++){
        if (currentlyBorrowed[i].getClassification() == returnedBook.getClassification()){
            currentlyBorrowed.erase(currentlyBorrowed.begin()+i);
        }
    }
    for (int i = 0; i < currentlyBorrowed.size(); i++){
        cout << "      " <<currentlyBorrowed[i];    
    }
    
    
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
istream &operator>>(istream &input, Borrower &b){
    long nwcharID;
    string nwName;
    string nwaddress;
    string temp;
    string delim = " ";
    getline(input,temp,' ');
    
    b.setcharID(atol(temp.c_str()));
    delim = ":";
    getline(input,temp,':');
    b.setName(temp.erase(temp.size()-1));
    delim = "\n";
    getline(input,temp,'\n');
    b.setAddress(temp);
            
    return input;
}
ostream &operator << (ostream &output,Borrower &b){
    output << b.getcharID() << " " << b.getName()
            << " : " <<b.getAddress() << "\n";
}
