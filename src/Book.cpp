/*
 * Book.cpp
 *
 *  Created on: Oct 9, 2017
 *      Author: shymacbook
 */

#include "Book.h"
#include <iostream>
#include <fstream>
#include <string>        // I don't know what this does
#include <cstdlib>         // I don't know what this does
#include <sstream>
using namespace std;


//============================================================================
// CONSTRUCTOR for Book
//============================================================================
Book::Book(int n, std::ifstream& infile)
{
    ARRsize = n;
    //CONTACTarr = [n];
    CONTACTarr = new Contact[n];
    nextSpot = 151425;
    string first;
    string last;
    string num;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        getline(infile, first, ' ');
        getline(infile, last, ' ');
        getline(infile, num);
        count ++;
        CONTACTarr[i].setName(first + ' ' + last);    // try using Setters
        CONTACTarr[i].setNumber(num);                  // try using Setters
    }
    infile.close();
}


//Contact Book::getContArray()
//{
//    return CONTACTarr;
//}

//============================================================================
// Delete method
// simply puts blank data into the entry location
//============================================================================
void Book::deleteContact(int index)
{
    CONTACTarr[index].setName("");
    CONTACTarr[index].setNumber("");
}

//============================================================================
// Add method
//============================================================================
void Book::addContact(/*int index, */string nameAdd, string numAdd)
{
    CONTACTarr[/*index*/nextSpot].setName(nameAdd);
    CONTACTarr[/*index*/nextSpot].setNumber(numAdd);
    nextSpot++;
}

//============================================================================
// List method
//============================================================================
void Book::listContacts()
{
    for (int i = 0; i < nextSpot; i++)
    {
        cout << CONTACTarr[i];

    }
}


//============================================================================
// GET nextSpot
//============================================================================
int Book::getNextSpot()
{
    return nextSpot;
}


//============================================================================
// Search method
//============================================================================
int Book::searchContacts(string item)
{
    Contact *here;
    //int indexFOUND;
    int j = 0;
    do
    {
        here = &CONTACTarr[j];
        j++;
    }
    while (here->getName() != item);
    //cout << "search loop ended" << endl;
    return (j-1);
}






