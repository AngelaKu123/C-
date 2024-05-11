#include "Fraction.h"

int main() {
    cout << "Constructor fuction" << endl;
    Fraction frac_1;
    cout << "   1. Fraction which value = 0: " << frac_1 << endl;
    Fraction frac_2(2);
    cout << "   2. Fraction which value = 2: " << frac_2 << endl;
    Fraction frac_3(3, 4);
    cout << "   3. Fraction which value = 3/4: " << frac_3 << endl;

    cout << "Access fuction" << endl;
    cout << "   1. Get numerator of fraction 3/4: " << frac_3.getNumerator() << endl;
    cout << "   2. Get denominator of fraction 3/4: " << frac_3.getDenominator() << endl;

    cout << "Public fuction" << endl;
    cout << "   1. Decimal value of fraction 3/4: " << frac_3.decimalValue() << endl;
    Fraction frac_4(8, -12);
    frac_4.simplify();
    cout << "   2. Simplify value of fraction 8/-12: " << frac_4 << endl;

    cout << "Operator overloading - Arithmetic" << endl;
    Fraction frac_5(2, 3), frac_6(5, 6);
    cout << "   1. Operator + : 2/3 + 5/6 = " << frac_5 + frac_6 << endl;
    cout << "   2. Operator - , binary case: 2/3 - 5/6 = " << frac_5 - frac_6 << endl;
    cout << "   3. Operator * : 2/3 * 5/6 = " << frac_5 * frac_6 << endl;
    cout << "   4. Operator / : 2/3 / 5/6 = " << frac_5 / frac_6 << endl;
    cout << "   5. Operator - , unary case: -(2/3) = " << -frac_5 << endl;

    
    return 0;
}