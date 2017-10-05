//============================================================================
// Name        : PhoneBookApp_01.cpp
// Author      : Beau Shirdavani
// Version     :
// Copyright   : Your copyright notice
// Description : Phone Book Application in C++, cs300 Data Structures
//					assignment 01
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "Contact.h"
using namespace std;

int main() {

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	// MANUAL test of Contact class
	Contact cont1("Jason Statham", 12345);
	cout << "test overloaded stream op. Contact class: " << cont1 << endl;

	// MANUAL test of read file INPUT
	// read lines manually put text into array of strings
	// each row gets string array element
	cout << "About to test the file import to string array" << endl;
	ifstream infile("phonebook.txt");
	if (!infile)
	{
		cout << "cannot find phonebook.txt" << endl;
	}
	string strARRAY[151430];
	string first;
	string last;
	string num;
	int count = 0;
	for (int i =0; i < 10; i++)
	{
		getline(infile, first, ' ');
		getline(infile, last, ' ');
		getline(infile, num);
		cout << "first: " << first << " last: " << last << " num: " << num;
	}

	infile.close();


	cout << "end from Eclipse edit..." << endl;

	return 0;
}
