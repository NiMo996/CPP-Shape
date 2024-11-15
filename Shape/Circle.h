
// Circle.h - You CAN edit this file!

#pragma once

#include "Shape.h"

class Circle : public Shape
{
private:

	float m_radius = 1; 

public:

	Circle() { }
	Circle(const float radius) { SetRadius(radius); } /*constructor sating that whenever Circle() is called with a float argument passed 
														It will take the radius and set it to m_radius else it will just stay = 1.*/
	virtual ~Circle() { } //destructor

	// Accessor
	virtual float GetRadius() { return m_radius; } //getter

	// Mutator

	virtual void SetRadius(const float radius); //setter


    virtual std::string GetType() const override { return "Circle"; } /*Can and will be overwritten from the base class Shape "Shape". 
																		Easy to do in header file because of Length of code using the ovveride keyword.*/

	// Define additional methods here:

	virtual float GetArea() const; //must be overwritten and that is done in Circle.cpp

	virtual float GetPerimeter() const; //must be overwritten and that is done in Circle.cpp

};