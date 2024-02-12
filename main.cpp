/**************************
Name: Abul Imam
Assignment: 3
Purpose of the file: This file will create objects
of circle and sphere and test it.
***************************/

#include "main.h"

int main(int argc, char** argv){

    /*********************************************
    This main function creates 4 objects of the circle
    and sphere class. The first object is created without
    any radius inputed. The last object is fed a negative
    number to test the class.

    @param argc : argument count
    @param argv : argument vector/value

    @return 0 : successful execution

    @exception na : na

    @note the objects are passed to the display functions
    by reference. (&myCircle1)
    *********************************************/

    Circle myCircle1;
    Circle myCircle2(4.567);
    Circle myCircle3(11.34897);
    Circle myCircle4(-4.892);

    Sphere mySphere1;
    Sphere mySphere2(4.567);     
    Sphere mySphere3(11.34897);
    Sphere mySphere4(-9.635);

    displayCircle(&myCircle1);
    displayCircle(&myCircle2);
    displayCircle(&myCircle3);
    displayCircle(&myCircle4);

    displaySphere(&mySphere1);
    displaySphere(&mySphere2);
    displaySphere(&mySphere3);
    displaySphere(&mySphere4);

    return 0;
}
