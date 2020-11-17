//
//  BillingTn.hpp
//  CS 215 Lab 4
//
//  Created by Micheal Smith on 8/14/18.
//  Copyright © 2018 Micheal Smith. All rights reserved.
//

#pragma once
#include <string>
#include <iostream>

#include "WorkingTN.hpp"

class BillingTn: public WorkingTn {
public:
    // Constructors
    BillingTn();
    BillingTn(const string & initNPA,
              const string & initNXX,
              const string & initLine,
              const string & initCustomerName,
              int initNumWorkingTN);
    
    // Deconstructors
     ~BillingTn() { cout << "In BillingTn Destructor\n"; }
    
    // Setters
    void setNumWorkingTN(int newNumberWorkingTN);
    
    // Getters
    int getNumWorkingTN() const; 
    
    // Member Functions
    virtual void printToStream(ostream & Out);
    
protected:
    int NumWorkingTN;
};
