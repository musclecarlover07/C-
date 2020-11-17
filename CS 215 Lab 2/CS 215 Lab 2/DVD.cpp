//
//  DVD.cpp
//  CS 215 Lab 2
//
//  Created by Micheal Smith on 7/26/18.
//  Copyright © 2018 Micheal Smith. All rights reserved.
//

#include "DVD.hpp"

// Constructors
DVD::DVD() {
    DVDtitle = "No Title";
    DVDtype = "Compiler";
    DVDcost = 0.0;
}

DVD::DVD(string initTitle, string initDVDType, float initCost) {
    if (initTitle.length() == 0) {
        cout << "You must give the DVD a Title. DVD Title not set." << endl;
        DVDtitle = "No Title";
    } else {
        DVDtitle = initTitle;
    }
    
    if (initDVDType.length() == 0) {
        cout << "You must give the DVD a Type. DVD Type not set" << endl;
    } else if (initDVDType == "Compiler"){
        DVDtype = "Compiler";
    } else if (initDVDType == "Dbase") {
        DVDtype = "Dbase";
    } else if (initDVDType == "Game") {
        DVDtype = "Game";
    } else if (initDVDType == "Presentation") {
        DVDtype = "Presentation";
    } else if (initDVDType == "Spreadsheet") {
        DVDtype = "Spreadsheet";
    } else if (initDVDType == "Word") {
        DVDtype = "Word";
    } else {
        cout << "You have selected and invalid type. Value is defaulting to Compiler." << endl;
    }
    
    if (initCost < 0.00) {
        cout << "You must give the DVD a Cost. DVD Cost not set" << endl;
        DVDcost = 0.00;
    } else {
        DVDcost = initCost;
    }
}

// Setters
void DVD::SetTitle(string newTitle) {
    if (newTitle.length() == 0) {
        cout << "You must give the DVD a title. Value is being set to 'No Title'." << endl;
        DVDtitle = "No Title";
    } else {
        DVDtitle = newTitle;
    }
}

void DVD::SetType(string newType) {
    if (newType.length() == 0) {
        cout << "You must select a type. Value is defaulting to Compiler." << endl;
    } else if (newType == "C" || newType == "c"){
        DVDtype = "Compiler";
    } else if (newType == "D" || newType == "d") {
        DVDtype = "Dbase";
    } else if (newType == "G" || newType == "g") {
        DVDtype = "Game";
    } else if (newType == "P" || newType == "p") {
        DVDtype = "Presentation";
    } else if (newType == "S" || newType == "s") {
        DVDtype = "Spreadsheet";
    } else if (newType == "W" || newType == "w") {
        DVDtype = "Word";
    } else {
        cout << "You have selected and invalid type. Value is defaulting to Compiler." << endl;
    }
}

void DVD::SetCost(float newCost) {
    if (newCost < 0.00) {
        cout << "Dvd Cost must be $0.00 or higher. Value defaulting to $0.00" << endl;
        DVDcost = 0.00;
    } else {
        DVDcost = newCost;
    }
}

// Getters
string DVD::GetTitle() {
    return DVDtitle;
}

string DVD::GetType() {
    return DVDtype;
}

float DVD::GetCost() {
    return DVDcost;
}

// Other Functions
void DVD::ListValidDVDTypes() {
    cout << "Please select an option:" << endl;
    cout << "  C: Compiler" << endl;
    cout << "  D: Dbase" << endl;
    cout << "  G: Game" << endl;
    cout << "  P: Presentation" << endl;
    cout << "  S: Spreadsheet" << endl;
    cout << "  W: Word" << endl;
}

void DVD::LoadInformation() {
    string tempDVDTitle;
    string tempDVDType;
    float tempDVDCost;
    
    cout << "Enter Some DVD Information." << endl;
    
    // DVD Title Input
    cout << "DVD Title: ";
    getline(cin, tempDVDTitle);
    
    cin.clear();
    cin.ignore(cin.rdbuf()-> in_avail(), '\n');
    
    SetTitle(tempDVDTitle);

    
    // DVD Type Input
    ListValidDVDTypes();
    cout << "DVD Type: ";
    getline(cin,tempDVDType);
    SetType(tempDVDType);
    
    cin.clear();
    cin.ignore(cin.rdbuf()-> in_avail(), '\n');

    // DVD Cost Input
    cout << "DVD Cost: $";
    cin >> tempDVDCost;
    SetCost(tempDVDCost);
    cin.ignore();  // Flushes out newline character after extraction
    
    cout << endl;
}
