//
//  BillingTn.cpp
//  CS 215 Lab 4
//
//  Created by Micheal Smith on 8/14/18.
//  Copyright © 2018 Micheal Smith. All rights reserved.
//

#include "BillingTN.hpp"

// Constructors
BillingTn::BillingTn():WorkingTn() { // Interactive Constructor
    do {
        cout << "Enter the number of working telehpone numbers" << endl;
        cin >> NumWorkingTN;
    } while (NumWorkingTN < 1);
}

BillingTn::BillingTn(const string & initNPA, const string & initNXX, const string & initLine, const string & initCustomerName, int initNumWorkingTN)
:WorkingTn(initNPA, initNXX, initLine, initCustomerName){
    if (initNumWorkingTN < 1) {
        cout << "Working telephone numbers needs to be greater than 0. Working telephone number not set." << endl;
        NumWorkingTN = 1;
    } else {
        NumWorkingTN = initNumWorkingTN;
    }

    cout << "In Billing Telephone Number Parameterized Constructor" << endl;
}

// Setters
void BillingTn::setNumWorkingTN(int newNumberWorkingTN) {
    if (NumWorkingTN < 1) {
        cout << "Working number of Telephone numbers needs to be greater than 1." << endl;
    } else {
        NumWorkingTN = newNumberWorkingTN;
    }
}

// Getters
int BillingTn::getNumWorkingTN() const {
    return NumWorkingTN;
}

// Member Functions
void BillingTn::printToStream(ostream & Out) {
    WorkingTn::printToStream(Out);
    cout << "Number of working lines: " << NumWorkingTN << endl;
}
