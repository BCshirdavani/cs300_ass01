// implementation file
// Contact Class


#include "Contact.h"
#include <iostream>
#include <string>
using namespace std;

//======================================================
// define the overloaded << operator
//======================================================
ostream& operator<<(ostream& os, /*const*/ Contact& c){
    os << c.Name << " " << c.Phone << endl;
    return os;
}

//======================================================
// define the new constructor
//======================================================
Contact::Contact(string name, string phone){
    Name = name;
    Phone = phone;
}

//======================================================
// setName
//======================================================
void Contact::setName(string nIN){
    Name = nIN;
}

//======================================================
// setNumber
//======================================================
void Contact::setNumber(string pIN){
    Phone = pIN;
}

//======================================================
// getName()
//======================================================
string Contact::getName(){
    return Name;
}
//======================================================
// getNumber()
//======================================================
string Contact::getNumber(){
    return Phone;
}
