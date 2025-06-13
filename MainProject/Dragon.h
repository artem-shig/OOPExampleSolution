#include "main.h"

class Dragon {

private:

	int head;
	int age;

	void calcCountDragonHeads() {

		if (age < 0) {
			return;
		}

		head = 3;

		if (age <= 200) {
			head += age * 3;
		}
		else if (age <= 300) {
			head += 200 * 3 + (age - 200) * 2;
		}
		else {
			head += 200 * 3 + 100 * 2 + (age - 300);
		}
	}

public:

	Dragon() : age(0), head(0) {}
	Dragon(int age) : age(age) {
		calcCountDragonHeads();
	}

	int getAge() {
		return age;
	}

	int getHead() {
		return head;
	}

	int getEye() {
		return head * 2;
	}

	void setAge(int age) {
		if (age > 0) {
			this->age = age;
			calcCountDragonHeads();
		}
	}

	int getCountDragonEyes() {

		if (head > 0) {
			return head * 2;
		}

		return 0;
	}

	string toString() {
		return "";
	}

};
