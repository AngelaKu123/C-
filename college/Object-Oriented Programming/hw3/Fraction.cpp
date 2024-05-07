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
    int b = frac.getNumerator();

    os << a << "/" << b << endl;
    return os;
}