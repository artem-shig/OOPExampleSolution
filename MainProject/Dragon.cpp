#include "Dragon.h"

void Dragon::calcCountDragonHeads() {

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

Dragon::Dragon(int age) : age(age) {
	Dragon::calcCountDragonHeads();
}

int Dragon::getAge() {
	return age;
}

int Dragon::getHead() {
	return head;
}

int Dragon::getEye() {
	return head * 2;
}

void Dragon::setAge(int age) {
	if (age > 0) {
		this->age = age;
		Dragon::calcCountDragonHeads();
	}
}

int Dragon::getCountDragonEyes() {

	if (head > 0) {
		return head * 2;
	}

	return 0;
}

string Dragon::toString() {
	return "";
}