// Eashan Vytla
// Grade: 9
// 3/30/2020
// Honors Computer Programming 3
// Project: Checkbook
// File: circle.h
// More Projects on Github: https://github.com/EashanVytla
// The purpose of this program is to introduce object oriented programming to calculate the circumfrence of a circle

#ifndef _CIRCLE_H
#define _CIRCLE_H

const float PI = 3.14159;

class circle {
public:
	//constructors
	circle();
	circle(const circle &);

	//member functions
	void SetRadius(float);
	double Area();
	double circumfrence();

private:
	//data
	float radius;
};

//default constructor
circle::circle() {
	radius = 0;
}

//copy constructor
circle::circle(const circle& Object) {
	radius = Object.radius;
}

//Method to set the radius of the circle
void circle::SetRadius(float IncomingRadius) {
	radius = IncomingRadius;
}

//Method to find the area of the circle
double circle::Area() {
	return (PI * radius * radius);
}

//Project 12-3: Method to find circumfrence of the circle
double circle::circumfrence() {
	return (PI * (2 * radius));
}

#endif