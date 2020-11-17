//
//  DvdFunction.hpp
//  CS 215 Lab 2
//
//  Created by Micheal Smith on 7/26/18.
//  Copyright © 2018 Micheal Smith. All rights reserved.
//

#pragma once

#include "DVD.hpp"
#include <iostream>
#include <string>
#include <memory>
#include <vector>

using namespace std;

void Display_DVD_Information(vector<unique_ptr<DVD>> & DVD_Uptrs);
void DisplayTotalAndAverageCosts(vector<unique_ptr<DVD>> & DVD_Uptrs);
void ChangeDVD(unique_ptr<DVD> & aDVD_Uptr);
