//
//  main.cpp
//  CS 215 Lab 1
//
//  Created by Micheal Smith on 7/10/18.
//  Copyright © 2018 Micheal Smith. All rights reserved.
//
#include <iostream>

#include "Sphere.hpp"
#include "FormatOutput.hpp"

using namespace std;

int main() {
    Sphere aSphere;
    
    centerLine("Data on Spheres CS215 Sec CS13-02 Lab 1", 39);
    centerLine("by", 2);
    centerLine("Micheal Smith", 13);
    
    // First line
    cout << "Radius";
    cout.fill('+');
    cout.width(7);
    cout << "+" << "Radius";
    cout.width(7);
    cout << "+" <<  "Circumfernece";
    cout.width(7);
    cout << "+" << "Volume";
    cout.width(4);
    cout <<  "+" << endl;
    
    // Second line
    cout.fill(' ');
    cout << "Decimal";
    cout.width(12);
    cout << "Binary";
    cout.width(19);
    cout << "Hexidecimal";
    cout.width(16);
    cout << "Scientific" << endl;
    
    // Third line
    cout.fill('=');
    cout.width(56);
    cout << "=" << endl;
    
    // Fourth line
    for (int x = 20; x < 31; x++) {
        aSphere.setRadius(x);
        
        cout.fill('.');
        printDecimal(aSphere.GetRadius());
        cout.width(11);
        printBinary(aSphere.GetRadius());
        cout.width(14);
        printHex(aSphere.calcCircumference());
        cout.width(21);
        printScientific(aSphere.calcVolume());
    }
    
    // Last line
    cout.fill('=');
    cout.width(56);
    cout << "=" << endl;
    
    cout << "End Output Lab 1" << endl;
    
    return 0;
}
