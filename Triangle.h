//
// ECE 141 A review
//
// Renjie Zhu on Mar 16, 2019
//

#ifndef REVIEW_TRIANGLE_H
#define REVIEW_TRIANGLE_H

#include "Shape.h"
#include "ShapeCalc.h"

class Triangle : public Shape, public ShapeCalc {

public:

    double area() override {
        return 0.5 * width * height;
    }

    double circumference() override {
        return 0.0;
    }
};

#endif //REVIEW_TRIANGLE_H
