//============================================================================
// Name        : PhoneBookApp_01.cpp
// Author      : Beau Shirdavani
// Version     :
// Copyright   : Your copyright notice
// Description : Phone Book Application in C++, cs300 Data Structures
//					assignment 01
//============================================================================

#include <iostream>
#include "Contact.h"
using namespace std;

int main() {

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	// MANUAL test of Contact class
	Contact cont1("Jason Statham", 12345);
	cout << "test overloaded stream op. Contact class: " << cont1 << endl;

	return 0;
}
