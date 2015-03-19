#include <iostream>
#include<string>
#include "LibraryBook.h"
#include <stdlib.h>
using namespace std;


void LibraryBook::setClassification(string newValue){
    classification = newValue;
}
string LibraryBook::getClassification(){
    return classification;
}
void LibraryBook:: setStatus(int newStatus){
    if (newStatus ==1){
        thisStatus = ON_LOAN;
        
    }
    else if (newStatus == 2){
        thisStatus = AVAILABLE_FOR_LENDING;
    }
    else{
        thisStatus = REFERENCE_ONLY;
    }
}
int LibraryBook::getStatus(){
    return thisStatus;
}
istream &operator>>(istream &input, LibraryBook &b){
    string title;
    string author;
    int pages;
    string inputClassification;
    string temp;
    getline(input,temp,',');
    b.setAuthor(temp);
    getline(input,temp,'"');
    getline(input,temp,'"');
    b.setTitle(temp);
    getline(input,temp,'(');
    getline(input,temp,' ');
    b.setPages(atoi(temp.c_str()));
    getline(input,temp,'[');
    getline(input,temp,' ');
    b.setClassification(temp);
    
    getline(input,temp,']');
    if (temp == "ON LOAN"){
        b.setStatus(LibraryBook::ON_LOAN);
    }
    else if(temp == "AVAILABLE FOR LENDING"){
        b.setStatus(LibraryBook::AVAILABLE_FOR_LENDING);
        
    }
    else{
        b.setStatus(LibraryBook::REFERENCE_ONLY);;
    }
    getline(input,temp,'\n');
            
    
    return input;
    
}
ostream &operator << (ostream &output, LibraryBook &b ){

    output << b.getAuthor() << ", \"" << b.getTitle() << "\" (" << b.getPages()
            <<" pp.) ["<<b.getClassification()<<" ";
    int x = b.getStatus();
    string temp;
    if (x == LibraryBook::ON_LOAN) {
        temp = "ON_LOAN";
    }
    else if (x == LibraryBook::AVAILABLE_FOR_LENDING){
        temp = "AVAILABLE_FOR_LENDING";
    }
    else{
        temp = "REFERENCE_ONLY";
    }
        output<< temp<<"]\n";
    return output;
}