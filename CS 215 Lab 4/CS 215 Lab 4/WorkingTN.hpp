//
//  WorkingTN.hpp
//  CS 215 Lab 4
//
//  Created by Micheal Smith on 8/14/18.
//  Copyright © 2018 Micheal Smith. All rights reserved.
//

#pragma once
#include <string>
#include <iostream>

#include "TelephoneNumber.hpp"

using namespace std;

class WorkingTn: public TelephoneNumber {

public:
    // Constructors
    WorkingTn();
    WorkingTn(const string & initNPA,
              const string & initNXX,
              const string & initLine,
              const string & initCustomerName);
    
    // Deconstructors
    ~WorkingTn() { cout << "In WorkingTN Destructor\n"; }
    
    // Setters
    void setCustomerName(const string & newCustomerName);
    
    // Getters
    string getCustomerName();
    
    // Member Functions
    virtual void printToStream(ostream & Out);
    
protected:
    string CustomerName;
};
