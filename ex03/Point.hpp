#include "Fixed.hpp"

class Point
{
private:
	Fixed const	x;
	Fixed const	y;
public:
	Point();
	Point(Point const &other);
	Point(float const xValue, float const yValue);
	Point	&operator=(Point const &other);
	Fixed	getXValue() const;
	Fixed	getYValue() const;
	~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
