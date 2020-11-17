//
//  FormatOutput.hpp
//  CS 215 Lab 1
//
//  Created by Micheal Smith on 7/10/18.
//  Copyright © 2018 Micheal Smith. All rights reserved.
//
#pragma once

#include <iostream>

using namespace std;

void printDecimal(long inNum);
void printHex(int inNum);
void printBinary(int inNum, int NumDigits = 8);
void printScientific(float inNum);
void centerLine(const string & text, unsigned int lineLength);
