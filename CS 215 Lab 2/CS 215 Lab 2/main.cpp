//
//  main.cpp
//  CS 215 Lab 2
//
//  Created by Micheal Smith on 7/26/18.
//  Copyright © 2018 Micheal Smith. All rights reserved.
//

#include <iostream>
#include "DVD.hpp"
#include "DvdFunction.hpp"

using namespace std;


/*
 Updated Parameterized Constructor and tried the following in LoadInformation:
 cin.clear();
 cin.ignore(cin.rdbuf()-> in_avail(), '\n');
 
 This did not fix the issue. Just leaving cin.ignore()
*/

int main() {
    // Step 1
    unique_ptr<DVD>  UpDVD_1(new DVD);
    unique_ptr<DVD>  UpDVD_2(new DVD);
    unique_ptr<DVD>  UpDVD_3(new DVD);
    
    // Step 2
    UpDVD_1 -> LoadInformation();
    UpDVD_2 -> LoadInformation();
    UpDVD_3 -> LoadInformation();
    
    // Step 3
    vector<unique_ptr<DVD>> DVD_Container;
    
    // Step 4
    DVD_Container.push_back(move(UpDVD_1));
    DVD_Container.push_back(move(UpDVD_2));
    DVD_Container.push_back(move(UpDVD_3));
    
    // Step 5
    Display_DVD_Information(DVD_Container);
    
    // Step 6
    DisplayTotalAndAverageCosts(DVD_Container);
    
    // Step 7
    ChangeDVD(DVD_Container[0]);
    ChangeDVD(DVD_Container[1]);
    
    // Step 8
    Display_DVD_Information(DVD_Container);
    
    // Step 9
    DisplayTotalAndAverageCosts(DVD_Container);

    return 0;
}
