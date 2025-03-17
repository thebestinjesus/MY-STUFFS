// HM 7.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Rectangle
{
	double length;
	double width;
};

double area(Rectangle r)
{
	return r.length * r.width;
}
int main()
{
	Rectangle r;
	cout << "enter the length of the rectangle: "<<endl;
	cin >> r.length;
	cout << "enter the width of the rectangle: "<<endl;
	cin >> r.width;
	cout << "the area of the rectangle is: " << area(r) << endl;


}


