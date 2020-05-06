// Eashan Vytla
// Grade: 9
// 3/30/2020
// Honors Computer Programming 3
// Project: Checkbook
// File: Main.cpp
// More Projects on Github: https://github.com/EashanVytla
// The purpose of this program is to introduce object oriented programming to calculate the circumfrence of a circle

#include <iostream>
#include "VytlaEashan_Circle.h"
#include "VytlaEashan_Rectangle.h"

using namespace std;

int main()
{
    float radius = 0;

    float length = 0;
    float width = 0;

    char replay = 'n';
    char menuresponse = 'C';

    circle mycircle;
    Rectangle myrectangle;

    do {
        cout << "R - Rectangle\n";
        cout << "C - Circle\n";

        cin >> menuresponse;

        if (menuresponse == 'R' || menuresponse == 1) {
            cout << "Please Enter The length of Rectangle: ";
            cin >> length;

            cout << "Please Enter The width of Rectangle: ";
            cin >> width;

            myrectangle.SetLength(length);
            myrectangle.SetWidth(width);

            cout << "" << endl;

            cout << "Area: " << myrectangle.Area() << endl;
            cout << "Perimeter: " << myrectangle.Perimeter() << endl;

            cout << "" << endl;
        }
        else if (menuresponse == 'C' || menuresponse == 2) {
            cout << "Please Enter The Radius of Circle: ";
            cin >> radius;

            mycircle.SetRadius(radius);

            cout << "" << endl;

            cout << "Area: " << mycircle.Area() << endl;
            cout << "Circumfrence: " << mycircle.circumfrence() << endl;

            cout << "" << endl;
        }
        

        cout << "Would you like to repeat? [Y/n]";
        cin >> replay;
    } while (replay == 'y' || replay == 'Y');
}
