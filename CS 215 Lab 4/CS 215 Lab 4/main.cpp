//
//  main.cpp
//  CS 215 Lab 4
//
//  Created by Micheal Smith on 8/14/18.
//  Copyright © 2018 Micheal Smith. All rights reserved.
//

#include <iostream>
#include "TelephoneNumber.hpp"
#include "WorkingTN.hpp"
#include "BillingTN.hpp"

ostream & operator << (ostream & Out, TelephoneNumber & TN) {
    TN.printToStream(Out);
    return Out;
}

int main() {
    //Declaring Telephone Objects:
    TelephoneNumber YourNumber;
    TelephoneNumber Paul("719", "590", "6768");
    TelephoneNumber Bob("719", "590", "6729");
    
    WorkingTn CSStaff1("719", "590", "6732", "Book Store");
    WorkingTn CSStaff2("212", "371", "6940", "Borland C++ Guru");
    WorkingTn CSStaff3 ("405", "612", "3433", "Visual C++ Expert");
    
    BillingTn CSDept("719", "590", "6850", "Dean of CS", 10);
    BillingTn Library("719", "598", "6708", "Librarian", 15);
    BillingTn Reception("719", "598", "0200", "Receptionist", 35);
    
    cout << "Testing the overloaded << operator with the virtual "
    <<  "PrintToStream()\n\n";
    cout << "The Telephone numbers are: \n";
    cout << YourNumber  << endl;
    cout << Paul  << endl;
    cout << Bob << endl;
    cout << "The Working Telephone numbers are: \n";
    cout << CSStaff1  << endl;
    cout << CSStaff2  << endl;
    cout << CSStaff3 << endl;
    cout << "The Billing Telephone numbers are: \n";
    cout << CSDept << endl;
    cout << Library << endl;
    cout << Reception << endl;
    
    cout << "End Tests of Telephone hierarchy!" << endl;
}
