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

	Student() {

		name = "no name";
		surname = "no surname";
		age = 0;
		_class = 0;
		gender = 'm';
		alive = false;
		mark = 0;
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
