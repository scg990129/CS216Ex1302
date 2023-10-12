//
// Created by Jacob Yeung on 10/11/23.
//

#ifndef CS216EX1302_RECTANGLETYPE_H
#define CS216EX1302_RECTANGLETYPE_H

#include <iostream>
using namespace std;


class rectangleType
{
    //Overload the stream insertion and extraction operators
    friend ostream& operator<<(ostream&, const rectangleType &);
    friend istream& operator>>(istream&, rectangleType &);

public:
    void setDimension(double l, double w);
    double getLength() const;
    double getWidth() const;
    double area() const;
    double perimeter() const;

    //Overload the arithmetic operators
    rectangleType operator + (const rectangleType &) const;
    rectangleType operator - (const rectangleType &) const;
    rectangleType operator * (const rectangleType&) const;

    //Overload the increment and decrement operators
    rectangleType operator ++ ();          //pre-increment
    rectangleType operator ++ (int);       //post-increment
    rectangleType operator -- ();          //pre-decrement
    rectangleType operator -- (int);       //post-decrement

    //Overload the relational operators
    bool operator == (const rectangleType&) const;
    bool operator != (const rectangleType&) const;
    bool operator <= (const rectangleType&) const;
    bool operator < (const rectangleType&) const;
    bool operator >= (const rectangleType&) const;
    bool operator > (const rectangleType&) const;

    //constructors
    rectangleType();
    rectangleType(double l, double w);

protected:
    double length;
    double width;
};

// Contact GitHub API Training Shop Blog About
// © 2017 GitHub, Inc. Terms Privacy Security Status Help

#endif //CS216EX1302_RECTANGLETYPE_H

