#include "Point.hpp"

Point::Point(): x(), y()
{
}

Point::Point(Point const &other): x(other.x), y(other.y)
{
}

Point::Point(float const xValue, float const yValue): x(xValue), y(yValue)
{
}

Point &Point::operator=(Point const &other)
{
	(void)other;
	return (*this);
}

Fixed	Point::getXValue() const
{
	return (this->x);
}

Fixed	Point::getYValue() const
{
	return (this->y);
}

Point::~Point()
{
}
