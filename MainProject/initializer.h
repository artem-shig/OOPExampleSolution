#include "student.h"
//functional class
class Initializer {

public:

	void init(Student* students, int size) {
		const int nameSize = 10;
		const string names[]{ "Alex", "Danik", "Max", "Arseniy", "Arina",
		"Lina", "Anton", "Vera", "Ivan" };

		int maxAge = 18;
		int minAge = 13;

		int maxMark = 10;
		int minMark = 4;

		int maxClass = 11;
		int minClass = 7;

		int maxClass = 11;
		int minClass = 7;

		for (itn i = 0; i < size; i++)
		{
			Student temp;
			temp.name = names[rand() % nameSize];
			temp.surname = tolower((char)(rand() % ('Z' - 'A' + 1) + 'A')) + ".";
			temp.age = rand() % (maxAge - minAge + 1) + minAge;
			temp.mark = rand() % (maxMark - minMark + 1) + minMark;
			temp._class = rand() % (maxClass - minClass + 1) + minClass;
			temp.size = 0;
			temp.subjects = nullptr;
			temp.gender = 'm';
		}
	}
};
