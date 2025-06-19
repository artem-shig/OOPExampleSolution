#include "student.h"

class Group {

private:

	Student* students;
	int size;

public:

	Group();
	Group(Student* students, int size);

	~Group();

	bool isEmpty();
	int getSize();
	void add(Student student);
	void add(Student student, int index);
	void remove();
	void remove(Student student);
	void remove(int index);
	void clear();
	Student get(int index);
	void set(int index, Student student);

	string toString();

};

