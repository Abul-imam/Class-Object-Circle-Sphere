/**************************
Name: Abul Imam
Assignment: 3
Purpose of the file: This file will create a 
Circle Class and all its getters/setters/attributes.
***************************/

#include "circle.h"

Circle::Circle() {
    /*********************************************
    Constructor. Doesn't have any parameters. Initializes
    the radius to a default radius (MIN=0)

    @param na : na
    @return na : na
    @exception na : na
    *********************************************/
    setRadius(MIN);
}

Circle::Circle(double r) {
    /*********************************************
    Constructor. Pass in a positive double value to
    set the radius.

    @param r : the radius of the circle
    @return na : na
    @exception na : na
    *********************************************/
    setRadius(r);
}

double Circle::getRadius(){
    /*********************************************
    Returns the protected attribute radius.

    @param na : na
    @return radius : the radius of the circle
    @exception na : na
    *********************************************/
    return radius;
}

double Circle::getArea(){
    /*********************************************
    Calculates and returns the area of the circle.

    @param na : na
    @return (double) : the area of the circle (Area = PI * R^2)
    @exception na : na
    *********************************************/
    return PI * pow(radius, 2);
}

void Circle::setRadius(double r){
    /*********************************************
    Sets the radius of the circle which must be
    positive or it will default MIN

    @param r : the radius of the circle.
    @return na : na
    @exception na : na
    *********************************************/
   if (r > MIN){
    radius = r;
   } else{
    radius = MIN;
   }
}



