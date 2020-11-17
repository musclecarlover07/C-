//
//  TelephoneNumber.hpp
//  CS 215 Lab 4
//
//  Created by Micheal Smith on 8/14/18.
//  Copyright © 2018 Micheal Smith. All rights reserved.
//

#pragma once
#include <string>
#include <iostream>

using namespace std;

class TelephoneNumber {
public:
    // Constructors
    TelephoneNumber(); // Interactive constructor
    TelephoneNumber(const string & initNPA,
                    const string & initNXX,
                    const string & initLine);
    
    // Deconstructors
    ~TelephoneNumber() { cout << "In Telephone Number Destructor\n"; }
    
    // Setters
    void setNPA(const string & newNPA);
    void setNXX(const string & newNXX);
    void setLine(const string & newLine);
    
    // Getters
    string getNPA() const;
    string getNXX() const;
    string getLine() const;
    
    // Member Functions
    virtual void printToStream(ostream & Out);
    
private:
    string NPA;
    string NXX;
    string Line;
};
