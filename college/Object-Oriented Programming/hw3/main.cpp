#include "Fraction.h"

int main() {
    cout << "Constructor" << endl;
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
    Fraction frac_24(-3, -10);
    frac_24.simplify();
    cout << "                                 -3/-10: " << frac_24 << endl;

    cout << "Operator overloading - Arithmetic" << endl;
    Fraction frac_5(2, 3), frac_6(5, 6);
    cout << "   1. Operator + : 2/3 + 5/6 = " << frac_5 + frac_6 << endl;
    cout << "   2. Operator - , binary case: 2/3 - 5/6 = " << frac_5 - frac_6 << endl;
    cout << "   3. Operator * : 2/3 * 5/6 = " << frac_5 * frac_6 << endl;
    cout << "   4. Operator / : 2/3 / 5/6 = " << frac_5 / frac_6 << endl;
    cout << "   5. Operator - , unary case: -(2/3) = " << -frac_5 << endl;

    cout << "Operator overloading - Assignment" << endl;
    cout << "   1. Operator += : 2/3 += 5/6 -> " << (frac_5 += frac_6) << endl;
    Fraction frac_7(2, 3), frac_8(1, 4);
    cout << "   2. Operator -= : 2/3 -= 1/4 -> " << (frac_7 -= frac_8) << endl;
    Fraction frac_9(2, 3), frac_10(1, 2);
    cout << "   3. Operator *= : 2/3 *= 1/2 -> " << (frac_9 *= frac_10) << endl;
    Fraction frac_11(2, 3);
    cout << "   4. Operator /= : 2/3 /= 5/6 -> " << (frac_11 /= frac_10) << endl;

    cout << "Operator overloading - Increment, Decrement" << endl;
    Fraction frac_12, frac_13(2, 3);
    frac_12 = ++frac_13;
    cout << "   1. Operator prefix ++ : a(), b(2, 3) -> a = ++b -> a( " << frac_12 << " ) b( " << frac_13 << " )" << endl;
    Fraction frac_14, frac_15(2, 3);
    frac_14 = frac_15++;
    cout << "   2. Operator postfix ++ : a(), b(2, 3) -> a = b++ -> a( " << frac_14 << " ) b( " << frac_15 << " )" << endl;
    Fraction frac_16, frac_17(4, 3);
    frac_16 = --frac_17;
    cout << "   3. Operator prefix -- : a(), b(4, 3) -> a = --b -> a( " << frac_16 << " ) b( " << frac_17 << " )" << endl;
    Fraction frac_18, frac_19(4, 3);
    frac_18 = frac_19--;
    cout << "   4. Operator postfix -- : a(), b(4, 3) -> a = b-- -> a( " << frac_18 << " ) b( " << frac_19 << " )" << endl;
    
    cout << "Operator overloading - Comparison" << endl;
    Fraction frac_20(1, 2), frac_21(20, 24), frac_22(5, 10);
    cout << "   1. Operator == : 1/2 == 20/24 -> " << boolalpha << (frac_20 == frac_21) << endl;
    cout << "                    1/2 == 5/10 -> " << (frac_20 == frac_22) << endl;
    cout << "   2. Operator != : 1/2 != 20/24 -> " << (frac_20 != frac_21) << endl;
    cout << "                    1/2 != 5/10 -> " << (frac_20 != frac_22) << endl;
    Fraction frac_23(3, 4);
    cout << "   3. Operator > : 1/2 > 3/4 -> " << (frac_20 > frac_23) << endl;
    cout << "   4. Operator >= : 1/2 >= 3/4 -> " << (frac_20 >= frac_23) << endl;
    cout << "   5. Operator < : 1/2 < 3/4 -> " << (frac_20 < frac_23) << endl;
    cout << "   6. Operator <= : 1/2 <= 3/4 -> " << (frac_20 <= frac_23) << endl;
    
    return 0;
}