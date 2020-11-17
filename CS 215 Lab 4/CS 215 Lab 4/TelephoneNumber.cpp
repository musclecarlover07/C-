//
//  TelephoneNumber.cpp
//  CS 215 Lab 4
//
//  Created by Micheal Smith on 8/14/18.
//  Copyright © 2018 Micheal Smith. All rights reserved.
//

#include "TelephoneNumber.hpp"

// Constructors
TelephoneNumber::TelephoneNumber() { // Interactive Construstor
    // Validates the NPA string
    do {
        cout << "Enter 3 characters for NPA" << endl;
        getline(cin, NPA);
        cin.ignore(cin.rdbuf()->in_avail(),'\n');
    } while (NPA.length() != 3);
    
    // Validates the NXX string
    do {
        cout << "Enter 3 characters for NXX" << endl;
        getline(cin, NXX);
        cin.ignore(cin.rdbuf()->in_avail(),'\n');
    } while (NXX.length() != 3);
    
    // Validates the Line string
    do {
        cout << "Enter 4 characters for Line" << endl;
        getline(cin, Line);
        cin.ignore(cin.rdbuf()->in_avail(),'\n');
    } while (Line.length() != 4);
    
    cout << "In Telephone Number Default Constructor" <<endl;
} 

TelephoneNumber::TelephoneNumber(const string & initNPA, const string & initNXX, const string & initLine) {
    // Validates the NPA string
    if (initNPA.length() != 3) {
        cout << "NPA needs to be 3 characters long. NPA not set" << endl;
        NPA = "NPA";
    } else {
         NPA = initNPA;
    }
    
    // Validates the NXX string
    if (initNXX.length() != 3) {
        cout << "NXX needs to be 3 characters long. NXX not set" << endl;
        NXX = "NXX";
    } else {
        NXX = initNXX;
    }
    
    // Validates the Line string
    if (initLine.length() != 4) {
        cout << "NPA needs to be 4 characters long. Line not set" << endl;
        Line = "Line";
    } else {
        Line = initLine;
    }

    cout << "In Telephone Number Parameterized Constructor" <<endl;
}

// Setters
void TelephoneNumber::setNPA(const string & newNPA) {
    if (newNPA.length() != 3) {
        cout << "NPA needs to be 3 characters long. NPA not set" << endl;
        NPA = "NPA";
    } else {
        NPA = newNPA;
    }
}

void TelephoneNumber::setNXX(const string & newNXX) {
    if (newNXX.length() != 3) {
        cout << "NXX needs to be 3 characters long. NXX not set" << endl;
        NXX = "NXX";
    } else {
        NXX = newNXX;
    }
}

void TelephoneNumber::setLine(const string & newLine) {
    if (newLine.length() != 4) {
        cout << "Line needs to be 4 characters long. Line not set" << endl;
        NXX = "Line";
    } else {
        Line = newLine;
    }
}

// Getters
string TelephoneNumber::getNPA() const {
    return NPA;
}

string TelephoneNumber::getNXX() const {
    return NXX;
}

string TelephoneNumber::getLine() const {
    return Line;
}

// Member Functions
void TelephoneNumber::printToStream(ostream & Out) {
    // prints out Telephone Number: NPA-NXX-Line
    cout << NPA << "-" << NXX << "-" << Line << endl;
}

