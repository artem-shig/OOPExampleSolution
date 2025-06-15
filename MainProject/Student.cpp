//#include "student.h"
//
//
//Student::Student() : Student("no name", "no surname") {}
//
//Student::Student(string firstname, string surname) : firstname(firstname),
//surname(surname), age(0), _class(0), gender('m'), alive(false),
//mark(0), size(0), subjects(nullptr) {}
//
//Student::Student(string firstname, string surname, int age) : Student(firstname,
//	surname, age, 0, 'm', true, 4, 0, nullptr) {}
//
//Student::Student(string firstname, string surname, int age, int _class,
//	char gender, bool alive, double mark, int size, string* subjects) {
//
//	this->firstname = firstname;
//	this->surname = surname;
//	this->age = age;
//	this->_class = _class;
//	this->gender = gender;
//	this->alive = alive;
//	this->mark = mark;
//	this->size = size;
//	this->subjects = subjects;
//}
//
//Student::Student(const Student& student) : Student(student.firstname,
//	student.surname, student.age, student._class, student.gender,
//	student.alive, student.mark, student.size, student.subjects) {}
//
//Student::~Student() {
//
//	if (subjects != nullptr) {
//		delete[] subjects;
//	}
//}
//
//string Student::getFirstname() {
//	return firstname;
//}
//
//string Student::getSurname() {
//	return surname;
//}
//
//int Student::getAge() {
//	return age;
//}
//
//int Student::getClass() {
//	return _class;
//}
//
//bool Student::getAlive() {
//	return alive;
//}
//
//double Student::getMark() {
//	return mark;
//}
//
//char Student::getGender() {
//	return gender;
//}
//
//void Student::setFirstname(string firstname) {
//	this->firstname = firstname;
//}
//
//void Student::setSurname(string surname) {
//	this->surname = surname;
//}
//
//void Student::setAge(int age) {
//	if (age > 0) {
//		this->age = age;
//	}
//}
//
//void Student::setClass(int _class) {
//	if (_class >= 1 && _class <= 11) {
//		this->_class = _class;
//	}
//}
//
//void Student::setAlive(int alive) {
//	this->alive = alive;
//
//}
//
//void Student::setMark(double mark) {
//	if (mark >= 0 && mark <= 10) {
//		this->mark = mark;
//	}
//}
//
//void Student::setGender(char gender) {
//	if (gender == 'f' || gender == 'm') {
//		this->gender = gender;
//	}
//}
//
//string Student::toString() {
//	string s = firstname;
//	s += " " + surname + ".";
//	s += ", age = " + to_string(age);
//	s += ", class = " + to_string(_class);
//	s += ", gender = " + to_string(gender);
//	s += ", is alive - ";
//	s += (alive ? "yes" : "no");
//	s += ", average mark = " + to_string(mark);
//	return s;
//}
//
