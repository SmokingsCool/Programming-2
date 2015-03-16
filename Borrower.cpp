class Borrower{
    protected:
        char address [];
        char name [];
        long charID;
    public:
        Borrower(char*,char*,long);
        char* getAddress();
        char* getName();
        long getcharID();
        void setAddress(char []);
        void setName(char []);
        long setcharID(long);
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

