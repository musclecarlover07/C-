//
//  Sphere.hpp
//  CS 215 Lab 1
//
//  Created by Micheal Smith on 7/10/18.
//  Copyright © 2018 Micheal Smith. All rights reserved.
//

#pragma once

#include <iostream>

using namespace std;

const double pi = 3.14159265;

class Sphere {
public:
    // Construstors
    Sphere();
    Sphere(int inRadius);
    
    // Setters
    void setRadius(int newRadius);
    
    // Getters
    int GetRadius();
    
    // Calculates Circles
    float calcCircumference();
    float calcVolume();
    
private:
    int radius;
};
