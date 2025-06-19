#include "innitializer.h"
#include "Manager.h"

int main() {
	int size;

	cout << "Input size of students: ";
	cin >> size;

	Student* students = new Student[size];

	Initializer initializer;

	initializer.init(Group group);

	for (int i = 0; i < size; i++)
	{
		cout << students[i].toString() << endl;
	}

	Manager manager;

	Student bestStudent = manager.findBestStudent(students, size);
	Student worstStudent = manager.findWorstStudent(students, size);
	double average = manager.calculateAverageMark(students, size);

	cout << "Best student: " << bestStudent.toString() << endl;
	cout << "Worst student: " << worstStudent.toString() << endl;
	cout << "Students' average mark is " << average << endl;

	delete[] students;

	return 0;
}

//int main() {
//
//	int dragonAge;
//
//	do {
//		cout << "Enter the number of dragon heads: ";
//		cin >> dragonAge;
//	} while (dragonAge < 0);
//
//	Dragon dragon(dragonAge);
//
//	cout << "Dragon has " << dragon.getHead() << " heads" << endl;
//	cout << "Dragon has " << dragon.getEye() << " eyes" << endl;
//
//	Dragon dragon1(301);
//
//	cout << "Dragon has " << dragon1.getHead() << " heads" << endl;
//	cout << "Dragon has " << dragon1.getEye() << " eyes" << endl;
//
//}