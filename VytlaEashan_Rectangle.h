// Eashan Vytla
// Grade: 9
// 3/30/2020
// Honors Computer Programming 3
// Project: Checkbook
// File: circle.h
// More Projects on Github: https://github.com/EashanVytla
// The purpose of this program is to introduce object oriented programming to calculate the circumfrence of a circle

#ifndef _Rectangle_H
#define _Rectangle_H

class Rectangle {
public:
	//constructors
	Rectangle();
	Rectangle(const Rectangle&);

	//member functions
	void SetLength(float);
	void SetWidth(float);
	double Area();
	double Perimeter();

private:
	//data
	float length;
	float width;
};

//default constructor
Rectangle::Rectangle() {
	length = 0;
	width = 0;
}

//copy constructor
Rectangle::Rectangle(const Rectangle& Object) {
	length = Object.length;
	width = Object.width;
}

//Method to set the radius of the circle
void Rectangle::SetLength(float UserLength) {
	length = UserLength;
}

void Rectangle::SetWidth(float UserWidth) {
	width = UserWidth;
}

//Method to find the area of the circle
double Rectangle::Area() {
	return length * width;
}

//Project 12-3: Method to find circumfrence
double Rectangle::Perimeter() {
	return 2 * (length + width);
}

#endif