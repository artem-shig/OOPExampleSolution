#include "main.h"

class Dragon {

private:

	int head;
	int age;

	void calcCountDragonHeads();

public:

	Dragon() : age(0), head(0) {}
	Dragon(int age);

	int getAge();
	int getHead();
	int getEye();
	void setAge(int age);
	int getCountDragonEyes();
	string toString();
};
