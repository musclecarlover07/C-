//
//  main.cpp
//  CS 215 Lab 3
//
//  Created by Micheal Smith on 8/7/18.
//  Copyright © 2018 Micheal Smith. All rights reserved.
//

#include <iostream>
#include "Vector.hpp"

int main() {
    // Step 1
    Vector VecA = Vector(1.0, 0.0, 0.0);
    Vector VecB = Vector(0.0, 1.0, 0.0);
    Vector VecC = Vector(0.0, 0.0, 1.0);
    
    // Step 2
    cout.precision(3);
    cout << fixed << "Vector A: " << VecA << endl;
    cout << fixed << "Vector B: " << VecB << endl;
    cout << fixed << "Vector C: " << VecC << endl;
    cout << endl;
    
    // Step 3
    cout << "Dot Product: " << VecA * VecB << endl;
    
    // Step 4
    cout << "Cross Product: " << (VecA ^ VecB) << endl;
    
    // Step 5
    cout << "Cross Product: " << (VecB ^ VecA) << endl;
    cout << endl;
    
    // Step 6
    VecA = VecA * 3.27;
    cout << "VecA: " << VecA << " = " <<  VecA.magnitude() << endl;
    cout << endl;
    
    // Step 7
    VecB = VecB + 4.5;
    cout << "VecB: " << VecB << " = " <<  VecB.magnitude() << endl;
    cout << endl;
    
    // Step 8
    VecC = VecC - 1.36;
    cout << "VecC: " << VecC << " = " <<  VecC.magnitude() << endl;
    cout << endl;
    
    // Step 9
    Vector VecD = VecA - VecB;
    cout << "Vector D: " << VecD << endl;
    cout << endl;
    
    // Step 10
    cout << "Vector A: " << VecA << endl;
    cout << "Vector B: " << VecB << endl;
    cout << endl;
    
    // Step 11
    Vector VecE = VecB + VecC;
    cout << "Vector E: " << VecE << endl;
    cout << endl;
    
    // Step 12
    cout << "Vector B: " << VecB << endl;
    cout << "Vector C: " << VecC << endl;
    cout << endl;
    
    // Step 13
    cout << "Dot Product: " << VecD * VecE << endl;
    
    // Step 14
    cout << "Vector D: " << VecD << endl;
    cout << "Vector E: " << VecE << endl;
    cout << endl;
    
    // Step 15
    cout << "Corss Product: " << (VecD ^ VecE) << endl;
    
    // Step 16
    cout << "Vector D: " << VecD << endl;
    cout << "Vector E: " << VecE << endl;
    
    // Step 17
    VecE = -VecE;
    cout << "Negatation: " << VecE << endl;
    cout << endl;
    
    // Step 18
    cout << "Unit Vector: " << VecE / VecE.magnitude() << endl;
    
    // Step 19
    if (VecA == VecB) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    // Step 20
    if (VecD < VecE) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    cout << endl;
    // Step 21
    Vector A, B, C;
    A = B = C = Vector(1.5, 2.5, 2.5);
    cout << "A= " << A << endl;
    cout << "B= " << B << endl;
    cout << "C= " << C << endl;
    
    return 0;
}
