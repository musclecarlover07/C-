//
//  WorkingTN.cpp
//  CS 215 Lab 4
//
//  Created by Micheal Smith on 8/14/18.
//  Copyright © 2018 Micheal Smith. All rights reserved.
//

#include "WorkingTN.hpp"

// Constructors
WorkingTn::WorkingTn():TelephoneNumber() { // Interactive Construstor
    do {
        cout << "Enter the customers name" << endl;
        getline(cin, CustomerName);
        cin.ignore(cin.rdbuf()->in_avail(),'\n');
    } while (CustomerName.length() == 0);
}

WorkingTn::WorkingTn(const string & initNPA, const string & initNXX, const string & initLine, const string & initCustomerName)
:TelephoneNumber(initNPA, initNXX, initLine) {
    if (initCustomerName.length() == 0) {
        cout << "Customer has to have a name. Customer Name not set." << endl;
        CustomerName = "John Doe";
    } else {
        CustomerName = initCustomerName;
    }
    
    cout << "In Working Telephone Number Parameterized Constructor" << endl;
}

// Setters
void WorkingTn::setCustomerName(const string & newCustomerName) {
    if (newCustomerName.length() == 0) {
        cout << "Customer Name needs to have a name. Customer Name not set" << endl;
        CustomerName = "John Doe";
    } else {
        CustomerName = newCustomerName;
    }
}

// Getters
string WorkingTn::getCustomerName() {
    return CustomerName;
}

// Member Functions
void WorkingTn::printToStream(ostream & Out) {
    TelephoneNumber::printToStream(Out);
    cout << "Customer Name: " << CustomerName << endl;
}
