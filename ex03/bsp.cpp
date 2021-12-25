#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float	ap;
	float	bp;
	float	cp;

	ap = ((a.getXValue() - point.getXValue()) * (b.getYValue() - a.getYValue()) - (b.getXValue() - a.getXValue()) * (a.getYValue() - point.getYValue())).toFloat();
	bp = ((b.getXValue() - point.getXValue()) * (c.getYValue() - b.getYValue()) - (c.getXValue() - b.getXValue()) * (b.getYValue() - point.getYValue())).toFloat();
	cp = ((c.getXValue() - point.getXValue()) * (a.getYValue() - c.getYValue()) - (a.getXValue() - c.getXValue()) * (c.getYValue() - point.getYValue())).toFloat();
	if ((ap > 0 && bp > 0 && cp > 0) || (ap < 0 && bp < 0 && cp < 0))
		return (true);
	return (false);
}
