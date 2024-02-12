/**************************
Name: Abul Imam
Assignment: 3
Purpose of the file: This file will create a 
Sphere Class and all its getters/setters/attributes.
It inherits the circle class.
***************************/

#include "sphere.h"

Sphere::Sphere(){
    /*********************************************
    Constructor. Doesn't have any parameters. Initializes
    the radius to a default radius (MIN=0)

    @param na : na
    @return na : na
    @exception na : na
    *********************************************/
    setRadius(MIN);
}

Sphere::Sphere(double r){
    /*********************************************
    Constructor. Pass in a positive double value to
    set the radius.

    @param r : the radius of the circle
    @return na : na
    @exception na : na
    *********************************************/
    setRadius(r);
}

double Sphere::getArea(){
    /*********************************************
    Calculates and returns the surface area of the Sphere.
    This is a overriding function that replaces the getArea()
    from circle class.

    @param na : na
    @return (double) : the surface area of the sphere
    @exception na : na
    *********************************************/
   return 4 * PI * pow(radius, 2);
}

double Sphere::getVolume(){
    /*********************************************
    Calculates and returns the volume of the sphere.

    @param na : na
    @return (double) : the volume of the sphere
    @exception na : na
    *********************************************/
   return (4.0/3) * PI * pow(radius, 3);
}
