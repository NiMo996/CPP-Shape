
// Circle.h - You CAN edit this file!

#pragma once

#include "Shape.h"

class Circle : public Shape
{
private:

	double m_radius = 1;

public:

	Circle() { }
	Circle(double radius) { SetRadius(radius); }
	virtual ~Circle() { }

	virtual void SetRadius(double radius);

	// define additional methods here:

};