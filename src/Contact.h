// header file
// Contact Class

#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <stdio.h>
#include <iostream>
using namespace std;

class Contact{
    string Name;
    string Phone;
public:
    // default constructor
    Contact(){};
    // Make new constructor
    Contact(string name, string phone);
    // OVERLAOD the << operator to print Contacts
    friend ostream& operator<< (ostream& os, /*const*/ Contact& c);
    // setName
    void setName(string);
    // setNumber
    void setNumber(string);
    // getName()
    string getName();
    // getNumber()
    string getNumber();
};




#endif //CONTACT_H
