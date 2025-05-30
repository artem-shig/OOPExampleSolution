#include <iostream>
#include <string>
using namespace std;

class Point2D {

public:

	int x;
	int y;

	string getQuarter() {

		string msg = "";

		if (x == 0 && y == 0) {
			msg = "in the center.";
		}
		else if (x > 0 && y > 0) {
			msg = "in first quarter.";
		}
		else if (x < 0 && y > 0) {
			msg = "in second quarter.";
		}
		else if (x < 0 && y < 0) {
			msg = "in third quarter.";
		}
		else if (x < 0 && y > 0) {
			msg = "in fourth quarter.";
		}
		else if (y == 0) {
			msg = x > 0 ? "on the x-right-line." : "on the x-left-line.";
		}
		else if (x == 0) {
			msg = y > 0 ? "on the y-up-line." : "on the y-down-line.";
		}

		return msg;
	}
};
