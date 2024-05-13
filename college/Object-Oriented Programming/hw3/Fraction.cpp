#include "Fraction.h"
#include <numeric>
#include <cmath>

int Fraction::getNumerator() const {
    return num;
}
int Fraction::getDenominator() const {
    return denom;
}

double Fraction::decimalValue() {
    return (double)num / (double)denom;
}


void Fraction::simplify() {
    if (num < 0 && denom < 0) {
        num = abs(num);
        denom = abs(denom);
    }
    else if (num > 0 && denom < 0) {
        num = -num;
        denom = abs(denom);
    }

    int factor = gcd(abs(num), abs(denom));
    num /= factor;
    denom /= factor;
}

// function doesn't do simplify
ostream& operator << (ostream &os, const Fraction &frac) {
    int a = frac.getNumerator();
    int b = frac.getDenominator();

    os << a << "/" << b;
    return os;
}

// compute least common multiple(lcm) of two denom and multiple it to both num and denom
// plus and simplify them
Fraction Fraction::operator + (Fraction &other) {
    int plus_denom = lcm(this->denom, other.denom);
    int plus_num = (plus_denom / this->denom * this->num) + (plus_denom / other.denom * other.num);
    Fraction frac_plus(plus_num, plus_denom);
    frac_plus.simplify();
    return frac_plus;
}

// same with plus
Fraction Fraction::operator - (Fraction &other) {
    int minus_denom = lcm(this->denom, other.denom);
    int minus_num = (minus_denom / this->denom * this->num) - (minus_denom / other.denom * other.num);
    Fraction frac_minus(minus_num, minus_denom);
    frac_minus.simplify();
    return frac_minus;
}

// multiple two fraction and simplify
Fraction Fraction::operator * (Fraction &other) {
    Fraction frac_multi(this->num * other.num, this->denom * other.denom);
    frac_multi.simplify();
    return frac_multi;
}

// devide by this fraction multi reciprocal other fraction
Fraction Fraction::operator / (Fraction &other) {
    Fraction frac_devide(this->num * other.denom, this->denom * other.num);
    frac_devide.simplify();
    return frac_devide;
}

// different with binary case, unary to compute negative value
Fraction Fraction::operator - () {
    return Fraction(-num, denom);
}

// same with operater + yet doesn't create new Fraction object
Fraction& Fraction::operator += (Fraction &other) {
    int plus_denom = lcm(this->denom, other.denom);
    int plus_num = (plus_denom / this->denom * this->num) + (plus_denom / other.denom * other.num);
    this->denom = plus_denom;
    this->num = plus_num;
    this->simplify();
    return *this;
}

// same with operator - yet doesn't create new Fraction object
Fraction& Fraction::operator -= (Fraction &other) {
    int minus_denom = lcm(this->denom, other.denom);
    int minus_num = (minus_denom / this->denom * this->num) - (minus_denom / other.denom * other.num);
    this->denom = minus_denom;
    this->num = minus_num;
    this->simplify();
    return *this;
}

// same with operator * yet doesn't create new Fraction object
Fraction& Fraction::operator *= (Fraction &other) {
    this->num *= other.num;
    this->denom *= other.denom;
    this->simplify();
    return *this;
}

// same with operator / yet doesn't create new Fraction object
Fraction& Fraction::operator /= (Fraction &other) {
    this->num *= other.denom;
    this->denom *= other.num;
    this->simplify();
    return *this;
}

// prefix ++
Fraction& Fraction::operator ++ () {
    this->num += this->denom;
    this->simplify();
    return *this;
}

// postfix ++
Fraction Fraction::operator ++ (int) {
    Fraction temp(this->num, this->denom);
    this->num += this->denom;
    this->simplify();
    return temp;
}

// prefix --
Fraction& Fraction::operator -- () {
    this->num -= this->denom;
    this->simplify();
    return *this;
}

// postfix --
Fraction Fraction::operator -- (int) {
    Fraction temp(this->num, this->denom);
    this->num -= this->denom;
    this->simplify();
    return temp;
}

// true if two fractions are equality
bool Fraction::operator == (Fraction &other) {
    this->simplify();
    other.simplify();
    if (this->num == other.num && this->denom == other.denom)
        return true;
    return false; // else
}

// true if two fraction are NOT equality
bool Fraction::operator != (Fraction &other) {
    this->simplify();
    other.simplify();
    return (this->num != other.num || this->denom != other.denom);
}

// true if the left fraction is bigger than the right one
bool Fraction::operator > (Fraction &other) {
    return (this->decimalValue() > other.decimalValue());
}

bool Fraction::operator >= (Fraction &other) {
    return (this->decimalValue() >= other.decimalValue());
}

bool Fraction::operator < (Fraction &other) {
    return (this->decimalValue() < other.decimalValue());
}

bool Fraction::operator <= (Fraction &other) {
    return (this->decimalValue() <= other.decimalValue());
}