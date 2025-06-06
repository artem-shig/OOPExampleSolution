#include "main.h"

//entity-class
class Student {

public:

	string name;
	string surname; //фамилия
	int age;
	int _class;
	double mark;
	char gender;
	bool alive;
	itn size;
	string* subjects;

	Student() : Student("no name, ", "no surname") {
		//cout << "default-constructor" << endl;
	}

	Student(string name, string surname) : name(name), suname(surname),
		age(0), _class(0), gender('m'), alive(false), mark(0),
		size(0), subjects(nullptr) {
		//cout << "constructor with arguments" << endl;
	}

	Student(string name, string surname, int age) : Student(name, surname, 
		0, 'm', false, 4, 0, nullptr) {
	}

	Student(string name, string surname, int age, int _class, char gender,
		bool alive, double mark, int size, srting* subjects) {

		this->name = name;
		this->surname = surname;
		this->age = age;
		this->_class = _class;
		this->gender = gender;
		this->alive = alive;
		this->mark = mark;
		this->size = size;
		this->subjects = subjects;
	}

	Student(const Student& student) : Student(student.name, student.surname,
		student.age, student._class, student.gender, student.alive,
		student.mark, student.size, student.subjects) {
	}

	~Student() {
		//cout << "destructor" << endl;
		if (subjects != nullptr) {
			delete[] subjects;
		}
	}

	string toString() {

		string s = name + " " + surname;
		s += ", age = " + to_string(age);
		s += ", class = " + to_string(_class);
		s += ", gender = " + to_string(gender);
		s += ", is alive - ";
		s += (alive ? "yes" : "no");
		s += ", average mark = " + to_string(mark);

		return s;
	}
};
