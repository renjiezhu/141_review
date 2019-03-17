//
// ECE 141 A review
//
// Renjie Zhu on Mar 16, 2019
//

#ifndef REVIEW_CHILD_H
#define REVIEW_CHILD_H

#include "Shape.h"
#include "ShapeCalc.h"
#include <iostream>
#include <string>



class Rectangle : public Shape, public ShapeCalc {

public:

    double area() override {
        return width * height;
    }

    double circumference() override {
        return 2.0 * (width + height);
    }

};


#endif //REVIEW_CHILD_H
