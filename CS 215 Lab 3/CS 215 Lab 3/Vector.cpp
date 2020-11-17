//
//  Vector.cpp
//  CS 215 Lab 3
//
//  Created by Micheal Smith on 8/7/18.
//  Copyright © 2018 Micheal Smith. All rights reserved.
//

#include "Vector.hpp"


// Construstors
Vector::Vector() {
    x = 0.0;
    y = 0.0;
    z = 0.0;
}

Vector::Vector(double initX, double initY, double initZ) {
   // Validates x
    if (initX <= 0.00 || initX >= 0.0) {
        x = initX;
    } else {
        cout << "'x' must be a number. Value not changing. Setting 'x' to 0.0" << endl;
        x = 0.0;
    }
    
    // Validates y
    if (initY <= 0.00 || initY >= 0.0) {
        y = initY;
    } else {
        cout << "'y' must be a number. Value not changing. Setting 'y' to 0.0" << endl;
        y = 0.0;
    }
    
    // Validates z
    if (initZ <= 0.00 || initZ >= 0.0) {
        z = initZ;
    } else {
        cout << "'z' must be a number. Value not changing. Setting 'z' to 0.0" << endl;
        z = 0.0;
    }
}

// Setters
void Vector::setX(double newX) {
    if (newX <= 0.00 || newX >= 0.0) {
        x = newX;
    } else {
        cout << "'x' must be a number. Setting 'x' to 0.0" << endl;
        x = 0.0;
    }
}

void Vector::setY(double newY) {
    if (newY <= 0.00 || newY >= 0.0) {
        y = newY;
    } else {
        cout << "'y' must be a number. Setting 'y' to 0.0" << endl;
        y = 0.0;
    }
}

void Vector::setZ(double newZ) {
    if (newZ <= 0.00 || newZ >= 0.0) {
        z = newZ;
    } else {
        cout << "'z' must be a number. Setting 'z' to 0.0" << endl;
        z = 0.0;
    }
}

// Getters
double Vector::getX() const {
    return x;
}

double Vector::getY() const {
    return y;
}

double Vector::getZ() const {
    return z;
}

// Memebr Functions
double Vector::magnitude() const {
    //  sqrt(AX*AX + AY*AY + AZ*AZ);
    return sqrt(x * x + y * y + z * z);
}

// Multiplication
double Vector::operator*(const Vector & RHS) {
    // A * B = AX * BX + AY * BY + AZ * BZ
    return x * RHS.x + y * RHS.y + this-> z * RHS.z;
}

Vector Vector::operator*(double RHS) {
    // A * N = [AX * N, AY * N, AZ * N]
    return Vector(x * RHS, y * RHS, z * RHS);
}

// Addition
Vector Vector::operator+(const Vector & RHS) {
    //A + B = [AX + BX, AY + BY, AZ + BZ]
    return Vector(x + RHS.x, y + RHS.y, z + RHS.z);
}

Vector Vector::operator+(double RHS) {
    return Vector(x + RHS, y + RHS, z + RHS);
}

// Subtraction
Vector Vector::operator-(const Vector & RHS) {
    // A - B = [AX - BX, AY - BY, AZ - BZ]
    return Vector(x - RHS.x, y - RHS.y, z - RHS.z);
}

Vector Vector::operator-(double RHS) {
    return Vector(x - RHS, y - RHS, z - RHS);
}

// Negation
Vector Vector::operator-() {
    // For example if VecA = [2.4, -4.6, 3.8], then –VecA = [-2.4, 4.6, -3.8]
    return Vector(-x, -y, -z);
}

// Division
Vector Vector::operator/(double RHS) {
    // A/N = [AX/N, AY/N, AZ/N]
    return Vector(x / RHS, y / RHS, z / RHS);
}

// Cross Product
Vector Vector::operator^(const Vector & RHS) {
    // A X B = [AY * BZ - AZ * BY, AZ * BX - AX * BZ, AX * BY - AY * BX]
    return Vector(y * RHS.z - z * RHS.y, z * RHS.x - x * RHS.z, x * RHS.y - y * RHS.x);
}

// Equal Than
bool Vector::operator==(const Vector & RHS) {
    if (x == RHS.x && y == RHS.y && z == RHS.z) {
        return true;
    } else {
        return false;
    }
}

// Less Than
bool Vector::operator<(const Vector & RHS) {
    return magnitude() < RHS.magnitude();
}

// Friends
Vector operator*(double LHS, const Vector & RHS) {
    return Vector(LHS * RHS.x, LHS * RHS.y, LHS * RHS.z);
}

Vector operator+(double LHS, const Vector & RHS) {
    return Vector(LHS + RHS.x, LHS + RHS.y, LHS + RHS.z);
}

Vector operator-(double LHS, const Vector & RHS) {
    return Vector(LHS - RHS.x, LHS - RHS.y, LHS - RHS.z);
}

ostream & operator<<(ostream & Out, const Vector & RHS) {
    Out << '[' << RHS.x << ", " << RHS.y << ", " << RHS.z << ']';
    return Out;
}
