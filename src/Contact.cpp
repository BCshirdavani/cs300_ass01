// implementation file
// Contact Class

#include "Contact.h"
#include <iostream>
using namespace std;

//======================================================
// define the overloaded << operator
//======================================================
ostream& operator<<(ostream& os, const Contact& c){
	os << c.Name << " " << c.Phone << endl;
	return os;
}

//======================================================
// define the new constructor
//======================================================
Contact::Contact(char name, int phone){
	Name = name;
	Phone = phone;
}

