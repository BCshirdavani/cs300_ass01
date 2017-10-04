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

Contact::Contact(string name, int phone){
	Name = name;
	Phone = phone;
}


