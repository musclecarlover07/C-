//
//  Encryption.cpp
//  CS 215 Lab 7
//
//  Created by Micheal Smith on 9/14/18.
//  Copyright © 2018 Micheal Smith. All rights reserved.
//

#include "Encryption.hpp"

void encrypt(string & inString) {
    string encryptedText;
    
    for (int i : inString) {
        i += 1;
        encryptedText += i;
    }
    
    inString = encryptedText;
}

void decrypt(string & inString) {
    string decryptedText;

    for (int i : inString) {
        i -= 1;
        decryptedText += i;
    }
    
    inString = decryptedText; 
}
