/**************************
Name: Abul Imam
Assignment: 3
Purpose of the file: This file contains all
the directives needed for sphere.cpp to run.
***************************/

#ifndef CLASSES_SPHERE_H
#define CLASSES_SPHERE_H

#include "circle.h"

class Sphere : public Circle{
    /*********************************************
    This class defines a Sphere. It has two constructors
    and can be instantiated with a default radius or with
    a caller assigned radius.

    @attrib radius : the radius of the sphere
    *********************************************/
    public:
        /**********************
        Constructors/Destructor
        ***********************/
        Sphere();
        Sphere(double);

        /**********************
        Getters
        ***********************/
        double getArea();
        double getVolume();
};

#endif //CLASSES_SPHERE_H