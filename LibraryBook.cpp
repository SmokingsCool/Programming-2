class LibraryBook : public Book{
    
    protected: 
        long classification;
        
    public:
        LibraryBook(char*,char*,long);
        long getClassification();
        enum status {ON_LOAN, AVAILABLE_FOR_LENDING,REFERENCE_ONLY};
        
            
    
    
};
LibraryBook :: LibraryBook(char* author,char*title,long classif){
    strcpy(Author,author);
    strcpy(Title,title);
    int sizeAuthor = strlen(Author);
    }

long LibraryBook::getClassification(){
    return classification;
}
