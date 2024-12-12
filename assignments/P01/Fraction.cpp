#include "Fraction.h"

Fraction::Fraction(int num, int den) : numerator(num), denominator(den) {
    if (den == 0) {
        throw std::invalid_argument("Denominator cannot be zero!");
    }
}

Fraction Fraction::operator+(const Fraction& other) const {
    int new_denom = lcm(denominator, other.denominator);
    int new_num = numerator * (new_denom / denominator) + other.numerator * (new_denom / other.denominator);
    return Fraction(new_num, new_denom).normalize();
}

Fraction Fraction::operator-(const Fraction& other) const {
    return *this + Fraction(-other.numerator, other.denominator); // Reuse addition with negation
}

Fraction Fraction::operator*(const Fraction& other) const {
    return Fraction(numerator * other.numerator, denominator * other.denominator).normalize();
}

Fraction Fraction::operator/(const Fraction& other) const {
    if (other.numerator == 0) {
        throw std::invalid_argument("Division by zero!");
    }
    return Fraction(numerator * other.denominator, denominator * other.numerator).normalize();
}

bool Fraction::operator==(const Fraction& other) const {
    return numerator * other.denominator == denominator * other.numerator;
}

std::ostream& operator<<(std::ostream& os, const Fraction& frac) {
    os << frac.numerator << "/" << frac.denominator;
    return os;
}

int Fraction::gcd(int a, int b) const {
    return b == 0 ? a : gcd(b, a % b);
}

int Fraction::lcm(int a, int b) const {
    return (a * b) / gcd(a, b);
}

Fraction Fraction::normalize() const {
    int gcd_val = gcd(numerator, denominator);
    return Fraction(numerator / gcd_val, denominator / gcd_val);
}
