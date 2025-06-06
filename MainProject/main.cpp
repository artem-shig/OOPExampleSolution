#include "Student.h"
#include "initializer.h"

int main() {

	int size;
	cout << "Enter size of students:";
	cin >> size;

	Student* students = new Student[size];

	Initialiser initializer;

	initializer.init(students, size);

	for (int i = 0; i < size; i++)
	{
		cout << students[i].toString() << endl;
	}

	delete[] students;

	return 0;
}