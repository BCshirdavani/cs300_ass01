// header file
// Contact Class

#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
#include <string>
//#include "Contact.cpp"
using namespace std;


class Contact{
	string Name;
	int Phone;
public:
	// default constructor
	//Contact(){};
	// Make new constructor
	Contact(string name, int phone);
	// OVERLAOD the << operator to print Contacts
	friend ostream& operator<< (ostream& os, /*const*/ Contact& c);
};





#endif //CONTACT_H
