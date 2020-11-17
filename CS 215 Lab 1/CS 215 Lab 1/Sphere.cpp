//
//  Sphere.cpp
//  CS 215 Lab 1
//
//  Created by Micheal Smith on 7/10/18.
//  Copyright © 2018 Micheal Smith. All rights reserved.
//
#include "Sphere.hpp"

Sphere::Sphere() {
    radius = 1;
}

Sphere::Sphere(int inRadius) {
    if (inRadius < 1 ) {
        cout << "Error Radius must be greater than 0. Defaulting to 1";
        radius = 1;
    }
    
    radius = inRadius;
}

// Setters
void Sphere::setRadius(int newRadius) {
    cout.unsetf(ios::hex);
    cout.unsetf(ios::scientific);
    cout.unsetf(ios::binary);
    
    if (newRadius < 1) {
        cout << "Error Radoius must be greater than 0. Not changing the current value";
    }
    
    radius = newRadius;
}


// Getters
int Sphere::GetRadius() {
    return radius;
}

float Sphere::calcCircumference() {
    // Calculates the Circumference of a circle  ~π * Diameter
    float circumference;
    circumference = pi * (radius + radius);
    
    return circumference;
}

float Sphere::calcVolume() {
    // Calculate the Volume of a circle  ~4/3 *  π  *  R3
    float volume;
    volume = (4.0/3.0) * pi * (radius * radius * radius);
    
    return volume;
}
