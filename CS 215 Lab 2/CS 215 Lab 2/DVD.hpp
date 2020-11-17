//
//  DVD.hpp
//  CS 215 Lab 2
//
//  Created by Micheal Smith on 7/26/18.
//  Copyright © 2018 Micheal Smith. All rights reserved.
//

#pragma once

#include <iostream>
#include <string>
#include <memory>
#include <vector>

using namespace std;

class DVD {
    
public:
    DVD();
    DVD(string initTitle, string initDVDType, float initCost);
    
    void ListValidDVDTypes();           // Displays a numbered list of valid DVD types
    void LoadInformation();             // Prompt for, input, and set all data members
    
    void SetTitle(string newTitle);     // Validate and then change the Title data member value
    void SetType(string newType);       // Validate and then change the DVDType data member value
    void SetCost(float newCost);        // Validate and then change the Cost data member value
    
    string GetTitle();                  // Return DVDtitle data member value
    string GetType();                   // Return DVDType data member value
    float GetCost();                    // Return DVDcost data member value
    
private:
    string DVDtitle;
    string DVDtype;
    float DVDcost;
};

