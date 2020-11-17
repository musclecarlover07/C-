//
//  DvdFunction.cpp
//  CS 215 Lab 2
//
//  Created by Micheal Smith on 7/26/18.
//  Copyright © 2018 Micheal Smith. All rights reserved.
//

#include "DvdFunction.hpp"

void Display_DVD_Information(vector<unique_ptr<DVD>> & DVD_Uptrs) {
    // Row 1
    cout.fill(' ');
    cout.width(20);
    cout << left << "Title";
    cout.width(15);
    cout << left << "Type";
    cout.width(15);
    cout << "Cost" << endl;
    
    // Rows 2+
    for (int i = 0; i < DVD_Uptrs.size(); ++i) {
        // Title Column
        cout.width(20);
        cout.fill('.');
        cout << left << DVD_Uptrs[i] -> GetTitle();
        
        // Type Column
        cout.width(15);
        cout << left << DVD_Uptrs[i] -> GetType();
        
        // Cost Column
        cout.precision(2);
        cout.fill(' ');
        cout << left  << "$" ;
        cout.width(7);
        cout << right << fixed << DVD_Uptrs[i] -> GetCost() << endl;
    }
    
    cout << endl; 
}

void DisplayTotalAndAverageCosts(vector<unique_ptr<DVD>> & DVD_Uptrs) {
    float totalDVDCost = 0.0;
    float avgDVDCost = 0.0;
    
    for (int i = 0; i < DVD_Uptrs.size(); ++i) {
        totalDVDCost += DVD_Uptrs[i] -> GetCost();
        avgDVDCost = (totalDVDCost) / (i + 1);
    }
    cout.precision(2);
    
    // Outputs the Total Cost
    cout.fill('.');
    cout.width(13);
    cout << left << "Total Cost:";
    cout.width(2);
    
    cout << right << "$";
    cout.fill(' ');
    cout.width(7);
    cout << fixed << totalDVDCost << endl;
   
    // Outputs the Average Cost
    cout.fill('.');
    cout << left << "Average Cost:";
    cout.width(2);
    cout << right << "$";
    cout.fill(' ');
    cout.width(7);
    cout << fixed << avgDVDCost << endl;
    
    cout << endl;
}

void ChangeDVD(unique_ptr<DVD> & aDVD_Uptr) {
    string changeValue;
    string changeTitle;
    string changeType;
    float changeCost = 0.0;
    bool updateValue = false;
    
    // Update Title
    cout << "Current Title: " << aDVD_Uptr -> GetTitle() << endl;
    
    do {
        cout << "Would you like to change the title? ";
        getline(cin, changeValue);
        
        cin.clear();
        cin.ignore(cin.rdbuf()-> in_avail(), '\n');
        
        if (changeValue == "Y" || changeValue == "y") {
            cout << "New Title: ";
            getline(cin, changeTitle);
            
            cin.clear();
            cin.ignore(cin.rdbuf()-> in_avail(), '\n');
            
            aDVD_Uptr -> SetTitle(changeTitle);
            updateValue = true;
        } else if (changeValue == "N" || changeValue == "n") {
            cout << "Title is not being changed." << endl;
            updateValue = true;
        } else {
            cout << "Invalid Selection. Please select Yes or No." << endl;
            updateValue = false;
        }
        
        cout << endl;
    } while (updateValue == false);
    
    // Update Type
    cout << "Current Type: " << aDVD_Uptr -> GetType() << endl;
    
    do {
        cout << "Would you like to change the type? ";
        getline(cin, changeValue);
        
        cin.clear();
        cin.ignore(cin.rdbuf()-> in_avail(), '\n');
        
        if (changeValue == "Y" || changeValue == "y") {
            aDVD_Uptr -> ListValidDVDTypes();
            cout << "New Type: ";
            getline(cin, changeType);
            
            cin.clear();
            cin.ignore(cin.rdbuf()-> in_avail(), '\n');
            
            aDVD_Uptr -> SetType(changeType);
            updateValue = true;
        } else if (changeValue == "N" || changeValue == "n") {
            cout << "Type is not being changed." << endl;
            updateValue = true;
        } else {
            cout << "Invalid Selection. Please select Yes or No." << endl;
            updateValue = false;
        }
        
        cout << endl;
    } while (updateValue == false);
    
    // Update Cost
    cout << "Current Cost: " << aDVD_Uptr -> GetCost() << endl;
    
    do {
        cout << "Would you like to change the cost? ";
        getline(cin, changeValue);
        
        cin.clear();
        cin.ignore(cin.rdbuf()-> in_avail(), '\n');
        
        if (changeValue == "Y" || changeValue == "y") {
            cout << "New Cost: $";
            cin >> changeCost;
            
            cin.ignore();  // Same as line 120 on DVD.cpp
            
            aDVD_Uptr -> SetCost(changeCost);
            updateValue = true;
        } else if (changeValue == "N" || changeValue == "n") {
            cout << "Cost is not being changed." << endl;
            updateValue = true;
        } else {
            cout << "Invalid Selection. Please select Yes or No." << endl;
            updateValue = false;
        }
        
        cout << endl;
    } while (updateValue == false);
}
