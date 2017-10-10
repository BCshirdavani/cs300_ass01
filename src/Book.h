/*
 * Book.h
 *
 *  Created on: Oct 9, 2017
 *      Author: shymacbook
 */

#ifndef SRC_BOOK_H_
#define SRC_BOOK_H_


#include <stdio.h>
#include "Contact.h"
#include <iostream>
#include <fstream>
#include <string>        // I don't know what this does
#include <cstdlib>         // I don't know what this does
using namespace std;


// make the BOOK class that HAS contact objects in an array
class Book{
    int ARRsize;
    int nextSpot;           // keeps track of next empty spot to add new contact to
    //Contact CONTACTarr[];                                         // error here
public:
    Contact* CONTACTarr;
    //============================================================================
    // Constructor
    //============================================================================
    Book(int n, std::ifstream& infile);

    //============================================================================
    // Destructor
    //============================================================================
    ~Book(){
        delete [] CONTACTarr;
        CONTACTarr = nullptr;
    }

    // GET contact array
    //Contact getContArray();

    //============================================================================
    // Search method
    //============================================================================
    int searchContacts(string);

    //============================================================================
    // List method
    //============================================================================
    void listContacts();

    //============================================================================
    // Delete method
    //============================================================================
    void deleteContact(int index);

    //============================================================================
    // Add method
    //============================================================================
    void addContact(/*int index, */string nameAdd, string numAdd);

    //============================================================================
    // GET nextSpot
    //============================================================================
    int getNextSpot();
};






#endif /* SRC_BOOK_H_ */
