

#include "Point.hpp"

/********** CONSTRUCTOR & DESTRUCTOR **********/

Point::Point()
	: x(Fixed())
	, y(Fixed()) {}

Point::Point(const float x, const float y)
	: x(Fixed(x))
	, y(Fixed(y)) {}

Point::Point(const Fixed x, const Fixed y)
	: x(x)
	, y(y) {}

/*Point::Point(const Point& other) {
	*this = other;
}*/
Point::Point(const Point& other)
	: x(other.x)
	, y(other.y)
{}

Point::~Point() {}

/********** COPY ASSIGNEMENT OPERATOR **********/

Point& Point::operator=(const Point& other) { (void)other; return *this; }
/*Point& Point::operator=(const Point& other) {
	if (this != &other) {
		return *this;
	}
	return *this;
}*/

/********** GETTERS **********/

Fixed Point::getX() const {
	return this->x;
}

Fixed Point::getY() const {
	return this->y;
}
