#ifndef FRACTION_H_
#define FRACTION_H_
#include <iostream>
using namespace std;

class Fraction {
private:
    int num;
    int denom;
public:
    Fraction(): num(0), denom(1) {} // represent the fraction 0
    Fraction(int _num): num(_num), denom(1) {} // represent the fraction num
    Fraction(int _num, int _denom): num(_num), denom(_denom) {} // represent the fraction num/denom

    int getNumerator() const;
    int getDenominator() const;

    double decimalValue();
    void simplify();

    friend ostream& operator << (ostream &os, const Fraction &frac);

    Fraction operator + (Fraction &other);
    Fraction operator - (Fraction &other);
    Fraction operator * (Fraction &other);
    Fraction operator / (Fraction &other);
    Fraction operator - ();

    Fraction& operator += (Fraction &other);
    Fraction& operator -= (Fraction &other);
    Fraction& operator *= (Fraction &other);
    Fraction& operator /= (Fraction &other);

    // prefix ++
    Fraction& operator ++ ();
    // postfix ++
    Fraction operator ++ (int);
    // prefix --
    Fraction& operator -- ();
    // postfix --
    Fraction operator -- (int);

    bool operator == (Fraction &other);
    bool operator != (Fraction &other);
    bool operator > (Fraction &other);
    bool operator >= (Fraction &other);
    bool operator < (Fraction &other);
    bool operator <= (Fraction &other);
};
#endif