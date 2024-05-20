#ifndef MYSHAPE_H_
#define MYSHAPE_H_

#include <iostream>
using namespace std;

class MyShape {
private:
    int typeOfShape;
public:
    MyShape(int type); // 1 rectangle, 2 circle
    virtual double findArea() const = 0;
    virtual void showShape() const;
    virtual ~MyShape();
};

class Rectangle: public MyShape {
private:
    int length;
    int width;
public:
    Rectangle(int l, int w);
    double findArea() const override;
    void showShape() const override;
    ~Rectangle();
};

class Circle: public MyShape {
private:
    int Diameter;
public:
    Circle(int d);
    double findArea() const override;
    void showShape() const override;
    ~Circle();
};
#endif