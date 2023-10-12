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
    friend rectangleType operator + (const rectangleType &) ;
    friend rectangleType operator - (const rectangleType &) ;
    friend rectangleType operator * (const rectangleType &) ;

    //Overload the increment and decrement operators
    friend rectangleType operator ++ ( rectangleType&);          //pre-increment
    friend rectangleType operator ++ ( rectangleType&, int);       //post-increment
    friend rectangleType operator -- ( rectangleType&);          //pre-decrement
    friend rectangleType operator -- ( rectangleType&, int);       //post-decrement

    //Overload the relational operators
    friend bool operator == (const rectangleType&, const rectangleType&) ;
    friend bool operator != (const rectangleType&, const rectangleType&) ;
    friend bool operator <= (const rectangleType&, const rectangleType&) ;
    friend bool operator < (const rectangleType&, const rectangleType&) ;
    friend bool operator >= (const rectangleType&, const rectangleType&) ;
    friend bool operator > (const rectangleType&, const rectangleType&) ;

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

