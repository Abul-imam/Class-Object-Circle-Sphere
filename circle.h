/**************************
Name: Abul Imam
Assignment: 3
Purpose of the file: This file contains all
the directives needed for circle.cpp to run.
***************************/

#ifndef CLASSES_CIRCLE_H
#define CLASSES_CIRCLE_H

#define MIN 0.0
#define PI 3.14159

#include <math.h>

class Circle{
    /*********************************************
    This class defines a Cirlce. It has two constructors
    and can be instantiated with a default radius or with
    a caller assigned radius.

    @attrib radius : the radius of the circle
    *********************************************/

    public:
        /**********************
        Constructors/Destructor
        ***********************/
        Circle();
        Circle(double);

        /**********************
        Getters
        ***********************/
        double getRadius();
        double getArea();

        /**********************
        Setters
        ***********************/
        void setRadius(double);

        protected:
            double radius;
    };
    #endif //CLASSES_CIRCLE_H