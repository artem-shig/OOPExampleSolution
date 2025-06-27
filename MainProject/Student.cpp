#pragma once
#include "Student.h"

Student::Student(string firstname, string surname, int age, int _class,
	char gender, bool alive, double mark, int size, string* subjects) {

	this->firstname = firstname;
	this->surname = surname;
	this->age = age;
	this->_class = _class;
	this->gender = gender;
	this->setAlive(alive);
	this->mark = mark;
	this->size = size;
	this->subjects = subjects;
}

Student::~Student() {

	if (subjects != nullptr) {
		delete[] subjects;
	}
}

int Student::getClass() {
	return _class;
}

void Student::setClass(int _class) {
	if (_class >= 1 && _class <= 11) {
		this->_class = _class;
	}
}

double Student::getMark() {
	return mark;
}

void Student::setMark(int mark) {
	if (mark >= 0 && mark <= 10) {
		this->mark = mark;
	}
}

string Student::toString() {
	string s = getFirstname();
	s += " " + getSurname() + ".";
	s += ", age = " + to_string(age);
	s += ", class = " + to_string(_class);
	s += ", gender = " + to_string(gender);
	s += ", is alive - ";
	s += (isAlive() ? "yes" : "no");
	s += ", average mark = " + to_string(mark);
	return s;
}