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

	Student(string fname, string sname) {

		name = fname;
		surname = sname;
		age = 0;
		_class = 0;
		gender = 'm';
		alive = false;
		mark = 0;
	}

	Student(string fname, string sname, int a) {

		name = fname;
		surname = sname;
		age = a;
		_class = 0;
		gender = 'm';
		alive = false;
		mark = 0;
	}

	Student(string fname, string sname, int a, int cl, char gen,
		bool al, double mk) {

		name = fname;
		surname = sname;
		age = a;
		_class = cl;
		gender = gen;
		alive = al;
		mark = mk;
	}

	Student(const Student& student) {
		name = student.name;
		surname = student.surname;
		age = student.age;
		_class = student._class;
		gender = student.gender;
		alive = student.alive;
		mark = student.mark;
	}

	~Student() {
		cout << "destructor" << endl;
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
