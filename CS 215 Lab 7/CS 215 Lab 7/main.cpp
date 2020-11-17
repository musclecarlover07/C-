//
//  main.cpp
//  CS 215 Lab 7
//
//  Created by Micheal Smith on 9/14/18.
//  Copyright © 2018 Micheal Smith. All rights reserved.
//

#include "Encryption.hpp"

using namespace std;

int main() {
    string fileName;
    string enteredText;
    string moreText;
    
    bool continued;
    
    ofstream outFile;
    ifstream inFile;
    
    cout << "File Name: ";
    getline(cin, fileName);
    cin.clear();
    cin.ignore(cin.rdbuf()-> in_avail(), '\n');

    outFile.open(fileName);
    if (!outFile) {
        cout << "File not opened" << endl;
        return 0;
    }

    do {
        cout << "\nEnter text to a document." << endl;
        cout << "Text:";
        getline(cin, enteredText);
        
        encrypt(enteredText);
        outFile << enteredText << endl;
        
        while (true) {
            cout << "\nDo you want to continue to enter text? ";
            getline(cin, moreText);

            if (moreText == "y" || moreText == "Y") {
                continued = true;
                break;
            } else if (moreText == "n" || moreText == "N") {
                continued = false;
                break;
            } else {
                cout << "Invalid Selection.";
                continued = true;
            }
        }
    } while (continued == true);

    outFile.close();
    
    // Open and Read File
    inFile.open("My Text.txt");
    
    if (!inFile) {
        cout << "File not opened" << endl;
        return 0;
    }
    
    getline(inFile, enteredText);
    
    while (!inFile.eof()) {
        decrypt(enteredText);
        cout << enteredText << endl;
        getline(inFile, enteredText);
    }
    
    cout << endl << endl;
    
    inFile.close();

    return 0;
}
