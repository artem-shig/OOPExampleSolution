#include "Student.h"

int main() {

	Student st1;
	Student st2("Alex", "Chichikov");
	Student st3("Ivan", "Ivanov", 15);
	Student st4("Artem", "Shigov", 15, 9, 'm', true, 9.6);
	Student st5(st4);

	cout << st1.toString() << endl;
	cout << st2.toString() << endl;
	cout << st3.toString() << endl;
	cout << st4.toString() << endl;
	cout << st5.toString() << endl;

	return 0;
}