#include "Point.h"

int main() {

	Point2D point1;

	cout << "Enter x and y: ";
	cin >> point1.x >> point1.y;

	cout << "Point is " << point1.getQuarter() << endl;

	return 0;
}