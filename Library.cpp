#include<vector>
using namespace std;
class Library{
    protected:
        vector<Borrower> userCollection;
        vector<LibraryBook> bookCollection;
        
    public:
        Library();
        void borrowBook(Borrower,LibraryBook);
        void returnBook(Borrower,LibraryBook);
        
    
};
void Library::borrowBook(Borrower user,LibraryBook book){
    if (book.getClassification() == 1){
        for (int i = 0; i < userCollection.size();i++){
            if (userCollection[i].getcharID() == user.getcharID()){
                userCollection[i].borrowNewBook(book);
            }
        }
        for (int i = 0; i < bookCollection.size();i++){
            if (bookCollection[i].getcharID() == book.getClassification()){
                bookCollection[i].ON_LOAN;
            }
        }
    }
    else{
        cout << "not available for lending this book" << endl;
    }
}