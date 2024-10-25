
// Circle.h - You CAN edit this file!

#pragma once

#include "Shape.h"

class Circle : public Shape
{
private:

	float m_radius = 1;

public:

	Circle() { }
	Circle(float radius) { SetRadius(radius); }
	virtual ~Circle() { }

	// Accessor
	virtual float GetRadius() { return m_radius; }

	// Mutator

	// Define additional methods here:


};