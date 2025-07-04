#include "Worker.h"

Worker::Worker() : Worker("", "", 0, '\0', false, 0.0) {}
Worker::Worker(string firstname, string surname, int age, char gender,
	bool alive, double salary) {
	this->setFirstname(firstname);
	this->setSurname(surname);
	this->setAge(age);
	this->setGender(gender);
	this->setAlive(alive);
	this->setSalary(salary);
}
Worker::~Worker() {}

double Worker::getSalary() {
	return salary;
}
void Worker::setSalary(double salary) {
	if (salary > 0) {
		this->salary = salary;
	}
}

string Worker::toString() {

	string s = getFirstname();
	s += " " + getSurname() + ".";
	s += ", age = " + to_string(age);
	s += ", gender = " + to_string(gender);
	s += ", is alive - ";
	s += (isAlive() ? "yes" : "no");
	s += ", salary = " + to_string(salary);
	return s;
}