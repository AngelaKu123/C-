#include "MyShape.h"
#include <cmath>

MyShape::MyShape(int type): typeOfShape(type) {
    cout << "A shape based on abstract class `MyShape` is created successfully." << endl;
}

void MyShape::showShape() const {
    cout << "Shape is Generic." << endl;
}

MyShape::~MyShape() {
    cout << "A shape based on abstract class `MyClass` is deleted successfully." << endl;
}

Rectangle::Rectangle(int l, int w): MyShape(1), length(l), width(w) {
    cout << "A rectangle based on class `Rectangle` is created succesfully." << endl;
}

double Rectangle::findArea() const {
    return static_cast<double>(length * width);
}

void Rectangle::showShape() const {
    cout << "Shape is Rectangle." << endl;
}

Rectangle::~Rectangle() {
    cout << "A rectangle based on class `Rectangle` is deleted successfully." << endl;
}

Circle::Circle(int d): MyShape(2), Diameter(d) {
    cout << "A circle based on class `Circle` is created succesfully." << endl;
}

double Circle::findArea() const {
    double radius = static_cast<double>(Diameter) / 2;
    return  radius * radius * M_PI;
}

void Circle::showShape() const {
    cout << "Shape is Circle." << endl;
}

Circle::~Circle() {
    cout << "A circle based on class `Circle` is deleted successfully." << endl;
}