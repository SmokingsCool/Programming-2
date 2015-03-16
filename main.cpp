/* 
 * File:   main.cpp
 * Author: SmokingsCool
 *
 * Created on 15 March 2015, 22:12
 */

#include "Book.h"
#include <iostream>
using namespace std;
/*
 * 
 */
int main(int argc, char** argv) {
    Book book1 ("A","A");
    Book compareTo ("A","A");
    if (book1 > compareTo){
        cout << "Book1 is greater than A i.e closer in alphabet" << endl;
         
    }
    else if (book1 < compareTo){
        cout << "Book1 is less than A i.e further in alphabet" << endl;
    }
    else if (book1 == compareTo){
        cout << "Book 1 and Book 2 are the same in both title and author" << 
                endl;
    }
    return 0;
}

