//
// ECE 141 A review
//
// Renjie Zhu on Mar 16, 2019
//


#include <iostream>
#include <string>
#include "Rectangle.h"
#include "Triangle.h"

int main() {

    auto* rectangle = new Rectangle();

    auto* triangle = new Triangle();

    rectangle->setHeight(5.0);
    rectangle->setWidth(2.5);

    triangle->setHeight(5.0);
    triangle->setWidth(2.5);

    std::cout << "rectangle area: " << rectangle->area() << std::endl;
    std::cout << "rectangle circ: " << rectangle->circumference() << std::endl;

    std::cout << "triangle area: " << triangle->area() << std::endl;
    std::cout << "triangle circ: " << triangle->circumference() << std::endl;



    return 0;
}