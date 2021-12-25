#include "Point.hpp"

int	main()
{
	if (bsp(Point(7, 7), Point(11, 1), Point(2,2), Point(7, 3)))
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
}