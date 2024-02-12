/**************************
Name: Abul Imam
Assignment: 3
Purpose of the file: This file contains all
the print statements that will display the circle
and sphere's attributes, area, volume etc.
***************************/

#include "functions.h"

void displayCircle(Circle *myCircle){
    /*********************************************
    This function accepts a pointer to an object of type
    'Circle'. Then it accesses & displays the radius and area of the object 
    using the methods of the Circle class getRadius() & getArea().

    @param myCircle : pointer to an object of 'Circle' class

    @return na : na
    @exception na : na
    *********************************************/
    cout << "Radius of Circle = " << myCircle->getRadius() << endl;
    cout << "Area of Circle = " << myCircle->getArea() << endl;
    cout << endl;
}

void displaySphere(Sphere *mySphere){
    /*********************************************
    This function accepts a pointer to an object of type
    'Sphere'. Then it accesses & displays the radius, surface
    area, volume of the object using the methods of the Sphere
    class getRadius(), getArea() & getVolume().

    @param mySphere : pointer to an object of 'Sphere' class

    @return na : na
    @exception na : na

    @note getRadius() & getArea() is inhertited from the Circle class.
    *********************************************/
    cout << "Radius of Sphere = " << mySphere->getRadius() << endl;
    cout << "Surface Area of Sphere = " << mySphere->getArea() << endl;
    cout << "Volume of Sphere = "<< mySphere->getVolume() << endl;
    cout << endl; 
}