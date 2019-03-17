//
// ECE 141 A review
//
// Renjie Zhu on Mar 16, 2019
//

#ifndef REVIEW_SHAPE_H
#define REVIEW_SHAPE_H

class Shape {

public:

    Shape() = default;
    Shape(double w, double h) : width(w), height(h) {};

    ~Shape() = default;

    void setWidth(double w) {
        width = w;
    }

    void setHeight(double h) {
        height = h;
    }

protected:
    double width = 0;
    double height = 0;
};


#endif //REVIEW_SHAPE_H
