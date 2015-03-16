/* 
 * File:   Borrower.h
 * Author: SmokingsCool
 *
 * Created on 16 March 2015, 06:59
 */

#ifndef BORROWER_H
#define	BORROWER_H
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

#endif	/* BORROWER_H */

