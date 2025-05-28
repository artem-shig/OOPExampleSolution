#include "Plane.h"

int main() {

	Plane plane;

	cout << "Before: ";
	cout << plane.toString() << endl;

	plane.brand = "Boeing";
	plane.model = "474-400";
	plane.height = 15;
	plane.width = 120;
	plane.length = 100;
	plane.count = 700;
	plane.speed = 1000;
	plane.running = true;

	cout << "\nAfter: ";
	cout << plane.toString() << endl;

	Plane* ptrPlane = nullptr;
	ptrPlane = new Plane;

	cout << "\nAfter(ptr):\n";

	ptrPlane->brand = "\tBoeing";
	ptrPlane->model = "373-400";
	ptrPlane->height = 11;
	ptrPlane->width = 110;
	ptrPlane->length = 90;
	ptrPlane->count = 350;
	ptrPlane->speed = 1000;
	ptrPlane->running = true;

	cout << ptrPlane->toString() << endl;

	return 0;
}