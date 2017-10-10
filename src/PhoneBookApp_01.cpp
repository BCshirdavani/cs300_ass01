//============================================================================
// Name        : PhoneBookApp_01.cpp
// Author      : Beau Shirdavani
// Version     :
// Copyright   : Your copyright notice
// Description : Phone Book Application in C++, cs300 Data Structures
//					assignment 01
//============================================================================

//  main.cpp
//  ass01_xcode

#include "Contact.h"
#include "Book.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <stdio.h>
#include <string.h>
#include <fstream>
using namespace std;


int main() {

    int BookSize = 151425;
    ifstream filenameIN2("/Users/shymacbook/Documents/BC/cs300_DataStructures/ass01/xCode/ass01_xcode/phonebook.txt");
    if (!filenameIN2)
    {
        cout << "cannot find file" << endl;
    }
    Book PhoneBook(BookSize,filenameIN2);


    cout << "WELCOME TO BEAU's PHONEBOOK APPLICATION" << endl;
    cout << "***MY PHONEBOOK APPLICATION***" << endl;

    char selection;
    while (selection != 'Q')
    {
        cout << endl << "Please choose an operation:" << endl;
        cout << "A (Add) | S (Search) | D (Delete) | L (List) | Q (Quit): " ;
        cout << selection << endl;
        cin >> selection;
        //getline(cin, selection);
        cout << selection << endl;

        string nameADD;
        string phoneADD;
        if (selection == 'A')
        {
            cin.clear();
            cin.ignore();
            cout << "Enter name to add: ";
            cin >> nameADD;
            cin.clear();
            cin.ignore();
            cout << "Enter number to add: ";
            cin >> phoneADD;
            cin.clear();
            cin.ignore();
            PhoneBook.addContact(nameADD, phoneADD);
        }
        else if (selection == 'S')
        {
            cin.clear();
            cin.ignore();
            string searchNAME;
            cout << "enter a full name to search for:";
            getline(cin, searchNAME);
            //cout << endl << "...searching for " << searchNAME << endl;
            //cin. >> searchNAME;
            cout << "Phone Number: " << PhoneBook.CONTACTarr[PhoneBook.searchContacts(searchNAME)].getNumber();
        }
        else if (selection == 'D')
        {
            cin.clear();
            cin.ignore();
            string deleteNAME;
            cout << "Enter a full name to delete:";
            getline(cin, deleteNAME);
            cout << "deleting " << deleteNAME << endl;
            //cin >> deleteNAME;
            PhoneBook.deleteContact(PhoneBook.searchContacts(deleteNAME));
        }
        else if (selection == 'L')
        {
            PhoneBook.listContacts();
        }
        //else break;
    }


    cout << "Good Bye" << endl;


return 0;
}
