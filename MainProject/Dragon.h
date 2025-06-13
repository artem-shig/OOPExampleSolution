#include "main.h"

class Dragon {

public:

	int head;
	int eye;
	int age;

	Dragon() : age(0), head(0) {}
	Dragon(int age) : age(age), head(3) {
		getCountDragonHeads();
	}

	int getCountDragonHeads() {

		if (age < 0) {
			return -1;
		}

		if (age <= 200) {
			head += age * 3;
		}
		else if (age <= 300) {
			head += 200 * 3 + (age - 200) * 2;
		}
		else {
			head += 200 * 3 + 100 * 2 + (age - 300);
		}

		return head;
	}

	int getCountDragonEyes() {

		if (head > 0) {
			return head * 2;
		}

		return 0;
	}

	string toString() {

		string s = "Heads: " + to_string(head);
		s += "\nEyes: " + to_string(eye);

		return s;
	}
};
