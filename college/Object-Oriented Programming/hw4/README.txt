1. 姓名: 谷品儒
2. 學號: 407410042
3. email: desire2033@gmail.com
4. 測試環境: tux
5. 完成項目
    (1) class MyShape
    (2) class Rectangle derived from class MyShape
    (3) class Circle derived from class MyShape
    (4) 三個 class 都放在 MyShape.h，實作在 MyShape.cpp
    (5) main program
    (6) makefile，可用指令 make、make clean
    (7) 執行檔案請輸入 `./MyShape.out`
6. Bonus
    (1) 基本輸出排版
    (2) Traverse 時會顯示 length & width or diameter
    (3) Traverse 時會顯示 shape 周長
7. Reference: chatgpt
8. 終端輸出範例
//
Input type for shape; 1 for rectangle, 2 for circle.
-> Shape 1 type: 2
Enter diameter for circle: 7
A shape based on abstract class `MyShape` is created successfully.
A circle based on class `Circle` is created succesfully.

-> Shape 2 type: 1
Enter length and width for rectangle: 6 8
A shape based on abstract class `MyShape` is created successfully.
A rectangle based on class `Rectangle` is created succesfully.

-> Shape 3 type: 4
Input error; please enter type 1 or 2.

-> Shape 4 type: 2
Enter diameter for circle: 9
A shape based on abstract class `MyShape` is created successfully.
A circle based on class `Circle` is created succesfully.

-> Shape 5 type: 1
Enter length and width for rectangle: 5 6
A shape based on abstract class `MyShape` is created successfully.
A rectangle based on class `Rectangle` is created succesfully.

============================================
Shape 1: Shape is Circle.
diameter = 7
The area of shape is 38.4845
The circumference of shape is 21.9911

Shape 2: Shape is Rectangle.
length = 6, width = 8
The area of shape is 48
The circumference of shape is 28

Shape 3 doesn't exist.

Shape 4: Shape is Circle.
diameter = 9
The area of shape is 63.6173
The circumference of shape is 28.2743

Shape 5: Shape is Rectangle.
length = 5, width = 6
The area of shape is 30
The circumference of shape is 22

============================================
Free shape 1:
A circle based on class `Circle` is deleted successfully.
A shape based on abstract class `MyClass` is deleted successfully.

Free shape 2:
A rectangle based on class `Rectangle` is deleted successfully.
A shape based on abstract class `MyClass` is deleted successfully.

Free shape 3:
Shape doesn't exist.

Free shape 4:
A circle based on class `Circle` is deleted successfully.
A shape based on abstract class `MyClass` is deleted successfully.

Free shape 5:
A rectangle based on class `Rectangle` is deleted successfully.
A shape based on abstract class `MyClass` is deleted successfully.

//