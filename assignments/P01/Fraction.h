#ifndef Fraction_h
#define Fraction_h

#include <iostream>

class Fraction {
private:
    int numerator;
    int denominator;

public:
    // Constructor
    Fraction(int num = 0, int den = 1);

    // Overloaded operators
    Fraction operator+(const Fraction& other) const;
    Fraction operator-(const Fraction& other) const;
    Fraction operator*(const Fraction& other) const;
    Fraction operator/(const Fraction& other) const;
    bool operator==(const Fraction& other) const;

    // Overload output operator (<<) for printing fractions
    friend std::ostream& operator<<(std::ostream& os, const Fraction& frac);

private:
    // Helper methods
    int gcd(int a, int b) const;  // Greatest Common Divisor
    int lcm(int a, int b) const;  // Least Common Multiple
    Fraction normalize() const;  // Reduce fraction to lowest terms

    // Disallow assignment (optional)
    Fraction& operator=(const Fraction& other) = delete;
};

// Function to calculate Least Common Denominator (LCD)
int Fraction::lcd(int a, int b) const;

#endif
