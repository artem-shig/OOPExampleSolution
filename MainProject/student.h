//#include "main.h"
//
//// entity-class
//class Student {
//private:
//	string firstname;
//	string surname;
//	int age;
//	int _class;
//	char gender;
//	bool alive;
//	double mark;
//	int size;
//	string* subjects;
//
//public:
//
//	// default-constructor or constructor without arguments
//	Student() : Student("no name", "no surname") {
//		//cout << "default-constructor" << endl;
//	}
//
//	// constructor with arguments
//	Student(string firstname, string surname) : firstname(firstname),
//		surname(surname), age(0), _class(0), gender('m'), alive(false),
//		mark(0), size(0), subjects(nullptr) {
//		//cout << "constructor with arguments" << endl;	
//	}
//
//	Student(string firstname, string surname, int age) : Student(firstname,
//		surname, age, 0, 'm', true, 4, 0, nullptr) {
//		//cout << "constructor with arguments" << endl;
//	}
//
//	// canonical constructor
//	Student(string firstname, string surname, int age, int _class,
//		char gender, bool alive, double mark, int size, string* subjects) {
//		//cout << "canonical constructor" << endl;
//		this->firstname = firstname;
//		this->surname = surname;
//		this->age = age;
//		this->_class = _class;
//		this->gender = gender;
//		this->alive = alive;
//		this->mark = mark;
//		this->size = size;
//		this->subjects = subjects;
//	}
//
//	// copy-constructor
//	Student(const Student& student) : Student(student.firstname,
//		student.surname, student.age, student._class, student.gender,
//		student.alive, student.mark, student.size, student.subjects) {
//		//cout << "canonical constructor" << endl;
//	}
//
//	~Student();
//
//	string getFirstname();
//	string getSurname();
//	int getAge();
//	int getClass();
//	bool getAlive();
//	double getMark();
//	char getGender();
//	void setFirstname(string firstname);
//	void setSurname(string surname);
//	void setAge(int age);
//	void setClass(int _class);
//	void setAlive(int alive);
//	void setMark(double mark);
//	string toString();
//	void setGender(char gender);
//};
