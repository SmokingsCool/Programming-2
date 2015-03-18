#include<vector>
#include <iostream>
#include "Library.h"
#include <fstream>
using namespace std;
Library::Library(){
    string temp1;
    string temp2;
    long x= 1;
    Borrower bo(temp1,temp2,x);
    ifstream bookFile("librarybooks.txt");
    while (!bookFile.eof()){
        Book b(temp1,temp2);
        LibraryBook LB(b,temp1);
        
        bookFile >> LB;
        bookCollection.push_back(LB);
        cout << LB;
    }
    cout <<"\n\n\n";
    ifstream userFile("users.txt");
    while (!userFile.eof()){
        Borrower bo(temp1,temp2,x);
        userFile >> bo;
        userCollection.push_back(bo);
        cout << bo;
    }
    
    ifstream transactionsFile("transactions.txt");
    while (!transactionsFile.eof()){
        Borrower bo(temp1,temp2,x);
        Book b(temp1,temp2);
        LibraryBook LB(b,temp1);
        string temp;
        getline(transactionsFile,temp, ' ');
        if (temp == "request:"){
            getline(transactionsFile,temp,':');
            temp.erase(temp.size()-1);
            bo.setName(temp);
            getline(transactionsFile,temp,' ');
            getline(transactionsFile,temp,',');
            LB.setAuthor(temp);
            getline(transactionsFile,temp,'"');
            getline(transactionsFile,temp,'"');
            LB.setTitle(temp);
            getline(transactionsFile,temp,'\n');
            cout << "\n\n\n\n\n";
            for (int i = 0; i < userCollection.size();i++){
                
                string temp1 = userCollection[i].getName();
                string temp2 = bo.getName();
                if (temp1 == temp2){
                    cout << bo.getName();
                    for (int j = 0; j < bookCollection.size();j++){
                        string temp1 = bookCollection[j].getAuthor();
                        string temp2 = LB.getAuthor();
                        string temp3 = bookCollection[j].getTitle();
                        string temp4 = LB.getTitle();
                        if ( temp1 == temp2
                                &&  temp3 == temp4){
                            cout << "\n        " << LB.getAuthor() <<"   " << LB.getTitle();
                            userCollection[i].borrowNewBook(bookCollection[j]);
                        }
                    }
                }
            }
        }
        else{
            getline(transactionsFile,temp,'\n');
        }
        //transactionsFile >> LB, bo;
        
//        for (int i = 0; i < userCollection.size();i++){
//            if (userCollection[i].getName() == bo.getName()){
//                for (int j = 0; j < bookCollection.size();j++){
//                    if (bookCollection[j].getAuthor() == LB.getAuthor()
//                            && bookCollection[j].getTitle() == LB.getTitle()){
//                        userCollection[i].borrowNewBook(bookCollection[j]);
//                    }
//                }
//            }
//        }
//        cout << bo;
    }
//    cout << "\n\n\n\n\n";
//    for (int i = 0; i < userCollection.size();i++){
//        cout << userCollection [i];
//        for (int j = 0; j < )
//    }
//    
    
}
void Library::borrowBook(Borrower user,LibraryBook book){
    if (book.getStatus() == LibraryBook::AVAILABLE_FOR_LENDING){
        for (int i = 0; i < userCollection.size();i++){
            if (userCollection[i].getcharID() == user.getcharID()){
                userCollection[i].borrowNewBook(book);
            }
        }
        for (int i = 0; i < bookCollection.size();i++){
            
            if (bookCollection[i].getClassification() == book.getClassification()){
                bookCollection[i].setStatus(LibraryBook::ON_LOAN);
            }
        }
    }
    else{
//        cout << book.setTitle() << " not available for lending this book" << endl;
    }
}
void Library::returnBook(Borrower user,LibraryBook book){
    
    for (int i = 0; i < userCollection.size();i++){
        if (userCollection[i].getcharID() == user.getcharID()){
            userCollection[i].returnBook(book);
        }
    }
    for (int i = 0; i < bookCollection.size();i++){
        if (bookCollection[i].getClassification() == book.getClassification()){
            bookCollection[i].setStatus(2);
        }
    }
        
}
//istream &operator >> (istream &input, LibraryBook &LB, Borrower &Bo){
//    string type;
//    string temp;
//    getline(input,temp,' ');
//    type = temp;
//    getline(input, temp, ' ');
//    Bo.setName(temp);
//    getline(input, temp, ' ');
//    getline(input, temp, ',');
//    LB.setAuthor(temp);
//    getline(input, temp, '"');
//    getline(input,temp,'"');
//    LB.setTitle(temp);
//    
//    return input;
//    
//}