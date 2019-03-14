#include "Triangle.h"
#include <iostream>

using namespace std;
short counter = 1;
Triangle::Triangle(float base, float height){
        base_ = base;
        height_ = height;
        cout <<"Triangle " << counter <<": b="<< base <<", h=" << height << ", area=" << area() << endl;
        counter++;
}

float Triangle::area(){
         float area = (0.5*base_*height_);
         return area;
}
