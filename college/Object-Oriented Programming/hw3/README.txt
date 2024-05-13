完成的作業項目
    step 1: make
    step 2: 輸入指令 `./Fraction.out`
    step 3: 等待程式跑完
    完成的作業步驟已一一列在結果中，ostream << 請見 Fraction.h line 21 和 Fraction.cpp line 32~39。
    測資大部分依據作業公告網站，詳細內容請見 main.cpp 和終端機輸出結果。
    執行檔輸出結果應為:
====================================================
Constructor
   1. Fraction which value = 0: 0/1
   2. Fraction which value = 2: 2/1
   3. Fraction which value = 3/4: 3/4
Access fuction
   1. Get numerator of fraction 3/4: 3
   2. Get denominator of fraction 3/4: 4
Public fuction
   1. Decimal value of fraction 3/4: 0.75
   2. Simplify value of fraction 8/-12: -2/3
                                 -3/-10: 3/10
Operator overloading - Arithmetic
   1. Operator + : 2/3 + 5/6 = 3/2
   2. Operator - , binary case: 2/3 - 5/6 = -1/6
   3. Operator * : 2/3 * 5/6 = 5/9
   4. Operator / : 2/3 / 5/6 = 4/5
   5. Operator - , unary case: -(2/3) = -2/3
Operator overloading - Assignment
   1. Operator += : 2/3 += 5/6 -> 3/2
   2. Operator -= : 2/3 -= 1/4 -> 5/12
   3. Operator *= : 2/3 *= 1/2 -> 1/3
   4. Operator /= : 2/3 /= 5/6 -> 4/3
Operator overloading - Increment, Decrement
   1. Operator prefix ++ : a(), b(2, 3) -> a = ++b -> a( 5/3 ) b( 5/3 )
   2. Operator postfix ++ : a(), b(2, 3) -> a = b++ -> a( 2/3 ) b( 5/3 )
   3. Operator prefix -- : a(), b(4, 3) -> a = --b -> a( 1/3 ) b( 1/3 )
   4. Operator postfix -- : a(), b(4, 3) -> a = b-- -> a( 4/3 ) b( 1/3 )
Operator overloading - Comparison
   1. Operator == : 1/2 == 20/24 -> false
                    1/2 == 5/10 -> true
   2. Operator != : 1/2 != 20/24 -> true
                    1/2 != 5/10 -> false
   3. Operator > : 1/2 > 3/4 -> false
   4. Operator >= : 1/2 >= 3/4 -> false
   5. Operator < : 1/2 < 3/4 -> true
   6. Operator <= : 1/2 <= 3/4 -> true
===============================================================
Bouns內容: 基本輸出排版
Reference: chatgpt
