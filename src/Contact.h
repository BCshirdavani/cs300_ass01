// header file
// Contact Class

#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
using namespace std;


class Contact{
	char Name;
	int Phone;
public:
	// default constructor
	Contact(){};
	// Make new constructor
	Contact(char, int);
	// OVERLAOD the << operator to print Contacts
	friend ostream& operator<< (ostream& os, const Contact& c);
};





#endif //CONTACT_H
