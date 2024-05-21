#ifndef MYSHAPE_H_
#define MYSHAPE_H_

#include <iostream>
using namespace std;

class MyShape {
private:
    int typeOfShape;
public:
    MyShape(int type); // 1 rectangle, 2 circle
    virtual void shapeElement() const = 0; // show the length & width or diameter
    virtual double findArea() const = 0;
    virtual double findCircumference() const = 0; // use double for class circle
    virtual void showShape() const;
    virtual ~MyShape();
};

class Rectangle: public MyShape {
private:
    int length;
    int width;
public:
    Rectangle(int l, int w);
    void shapeElement() const override;
    double findArea() const override;
    double findCircumference() const override;
    void showShape() const override;
    ~Rectangle();
};

class Circle: public MyShape {
private:
    int Diameter;
public:
    Circle(int d);
    void shapeElement() const override;
    double findArea() const override;
    double findCircumference() const override;
    void showShape() const override;
    ~Circle();
};
#endif