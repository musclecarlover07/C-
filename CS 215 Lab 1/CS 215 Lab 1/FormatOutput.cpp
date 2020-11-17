//
//  FormatOutput.cpp
//  CS 215 Lab 1
//
//  Created by Micheal Smith on 7/10/18.
//  Copyright © 2018 Micheal Smith. All rights reserved.
//

#include "FormatOutput.hpp"

void printDecimal(long inNum) {
    cout << inNum;
}

void printHex(int inNum) {
    cout.setf(ios::hex, ios::floatfield);
    cout.setf(ios::showbase);
    cout << hex << inNum;
    cout.unsetf(ios::hex);
}

void printBinary(int inNum, int NumDigits) {
    int ShiftAmount;
    for(ShiftAmount = NumDigits -1; ShiftAmount >= 0; ShiftAmount--)
    cout << ((inNum >> ShiftAmount) & 01);
}

void printScientific(float inNum) {
    cout.setf(ios::scientific, ios::floatfield);
    cout << inNum << endl;
}

void centerLine(const string & text, unsigned int lineLength) {
    int quarter = 56 / 2;
    
    int center = lineLength / 2;
    
    cout.fill(' ');
    cout.width(quarter - center);
    cout.setf(ios::right,ios::adjustfield);
    
    cout<< " " << text << endl;
}
