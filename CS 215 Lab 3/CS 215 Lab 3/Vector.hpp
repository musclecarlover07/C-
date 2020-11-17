//
//  Vector.hpp
//  CS 215 Lab 3
//
//  Created by Micheal Smith on 8/7/18.
//  Copyright © 2018 Micheal Smith. All rights reserved.
//

#pragma once
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

class Vector {
    friend Vector operator*(double LHS, const Vector & RHS);  // Double * Vector
    friend Vector operator+(double LHS, const Vector & RHS);  // Dounle + Vector
    friend Vector operator-(double LHS, const Vector & RHS);  // Dounle - Vector
    
    // cout << Vector
    // friend ostream & operator<<(ostream & Out, const Vector & RHS);
    
public:
    // Constructors
    Vector();
    Vector(double initX, double initY, double initZ);
    
    // Setters
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);
    
    // Getters
    double getX() const;
    double getY() const;
    double getZ() const;
    
    // Other
    double magnitude() const;
    
    // Overloaded Memeber Operators
    // Vector Multiplication
    double operator*(const Vector & RHS);   // Dot Product of Vector * Vector
    Vector operator*(double RHS);           // Vector * Double
    
    // Vector Addition
    Vector operator+(const Vector & RHS);   // Vector + Vector
    Vector operator+(double RHS);           // Vector + Double
    
    // Vector Subtraction
    Vector operator-(const Vector & RHS);   // Vector - Vector
    Vector operator-(double RHS);           // Vector - Double
    
    // Unaray Negation
    Vector operator-();                     // -Vector
    
    // Vector Division
    Vector operator/(double RHS);           // Vector - Double
    
    // Cross Product
    Vector operator^(const Vector & RHS);   // Corss Product (Vector ^ Vector)
    // When using ^ use () ex. cout << (VectorA ^ VectorB)
    // Cross Product formula
    // A X B = [AY * BZ - AZ * BY, AZ * BX - AX * BZ, AX * BY - AY * BX]
    
    // Equals
    bool operator==(const Vector & RHS);    // Vector == Vector
    
    // Less than
    bool operator<(const Vector & RHS);    // Vector < Vector (Magnitude LHS < Magnitude RHS)

private:
    double x{0.0};
    double y{0.0};
    double z{0.0};
};

// Global Operators:
// cout << Vector
ostream & operator<<(ostream & Out, const Vector & RHS);
