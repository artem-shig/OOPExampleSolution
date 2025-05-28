#include "main.h"

class Plane {

public:
	string brand;
	string model;
	double width;
	double length;
	double height;
	int speed;
	int count;
	bool running;

	string toString() {
		string s = "";
		s += brand + " " + model + "\n";
		s += "\tWidth = " + to_string(width) + "\n";
		s += "\tHeight = " + to_string(height) + "\n";
		s += "\tLength = " + to_string(length) + "\n";
		s += "\tSpeed = " + to_string(speed) + "\n";
		s += "\tCount of passengers = " + to_string(count) + "\n";
		s += (running ? "\tWorking" : "\tRepairing");
		return s;
	}
};
