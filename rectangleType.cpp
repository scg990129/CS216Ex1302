//
// Created by Jacob Yeung on 10/11/23.
//

#include "rectangleType.h"
#include <iostream>
#include <cassert>

#include "rectangleType.h"

using namespace std;


void rectangleType::setDimension(double l, double w)
{
    if (l >= 0)
        length = l;
    else
        length = 0;

    if (w >= 0)
        width = w;
    else
        width = 0;
}

double rectangleType::getLength() const
{
    return length;
}

double rectangleType::getWidth()const
{
    return width;
}

double rectangleType::area() const
{
    return length * width;
}

double rectangleType::perimeter() const
{
    return 2 * (length + width);
}

rectangleType::rectangleType(double l, double w)
{
    setDimension(l, w);
}

rectangleType::rectangleType()
{
    length = 0;
    width = 0;
}

rectangleType operator++(rectangleType& rectangle0)
{
    //increment the length and width
    ++rectangle0.length;
    ++rectangle0.width;

    return rectangle0; // *this;   //return the incremented value of the object
}

rectangleType operator++(rectangleType& rectangle0, int u)
{
    rectangleType temp(rectangle0.getLength(),rectangle0.getWidth());//= *this;  //use this pointer to copy
    //the value of the object
    //increment the length and width
    rectangle0.length++;
    rectangle0.width++;

    return temp;    //return the old value of the object
}

rectangleType operator--(rectangleType& rectangle0)
{
    //Decrement the length and width
    assert(rectangle0.getLength() != 0 && rectangle0.getWidth() != 0);
    --rectangle0.width;
    --rectangle0.length;

    return rectangle0;//*this;    //return the incremented value of the object
}

rectangleType operator--(rectangleType& rectangle0, int u)
{
    rectangleType temp(rectangle0.getLength(),rectangle0.getWidth()); //*this;  //use this pointer to copy
    //the value of the object

    //Decrement the length and width
    assert(rectangle0.getLength() != 0 && rectangle0.getWidth() != 0);
    rectangle0.length--;
    rectangle0.width--;

    return temp;    //return the old value of the object
}

rectangleType operator+
        (const rectangleType& rectangle0, const rectangleType& rectangle){
    rectangleType tempRect(
            rectangle0.getLength() + rectangle.getLength(),
            rectangle0.getWidth() + rectangle.getWidth()
            );
//    tempRect.length = length + rectangle.length;
//    tempRect.width = width + rectangle.width;

    return tempRect;
}

rectangleType operator-
        (const rectangleType& rectangle0, const rectangleType& rectangle)
{
    assert(rectangle0.getLength() >= rectangle.getLength() &&
           rectangle0.getWidth() >= rectangle.getWidth());

    rectangleType tempRect(rectangle0.getLength() - rectangle.getLength(),
                           rectangle0.getWidth() - rectangle.getWidth()
    );

//    tempRect.length = rectangle0.getLength() - rectangle.getLength();
//    tempRect.width = rectangle0.getWidth() - rectangle.getWidth();

    return tempRect;
}

rectangleType operator*(const rectangleType& rectangle0, const rectangleType& rectangle)
{
    rectangleType tempRect(rectangle0.getLength() * rectangle.getLength(),
                           rectangle0.getWidth() * rectangle.getWidth()
                           );

//    tempRect.length = rectangle0.length * rectangle.length;
//    tempRect.width = rectangle0.width * rectangle.width;

    return tempRect;
}

bool operator==
        (const rectangleType& rectangle0, const rectangleType& rectangle)
{
    return (rectangle0.area() == rectangle.area());
}

bool operator!=
        (const rectangleType& rectangle0, const rectangleType& rectangle)
{
    return (rectangle0.area() != rectangle.area());
}

bool operator<=
        (const rectangleType& rectangle0, const rectangleType& rectangle)
{
    return (rectangle0.area() <= rectangle.area());
}

bool operator<
        (const rectangleType& rectangle0, const rectangleType& rectangle)
{
    return (rectangle0.area() < rectangle.area());
}

bool operator>=
        (const rectangleType& rectangle0, const rectangleType& rectangle)
{
    return (rectangle0.area() >= rectangle.area());
}

bool operator>
        (const rectangleType& rectangle0, const rectangleType& rectangle)
{
    return (rectangle0.area() > rectangle.area());
}

ostream& operator<<(ostream& osObject,
                    const rectangleType& rectangle)
{
    osObject << "Length = "  << rectangle.length
             << "; Width = " << rectangle.width;

    return osObject;
}

istream& operator>>(istream& isObject, rectangleType& rectangle)
{
    isObject >> rectangle.length >> rectangle.width;

    return isObject;
}

