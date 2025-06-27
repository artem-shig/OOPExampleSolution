#include "main.h"

class Human{

private:

protected:

	string firstname;
	string surname;
	int age;
	char gender;
	bool alive;
	double salary;

public:

	Human();
	Human(string firstname, string surname, int age, char gender, bool alive);
	~Human();

	string getFirstname();
	string getSurname();
	int getAge();
	char getGender();
	bool isAlive();

	void setFirstname(string firstname);
	void setSurname(string surname);
	void setAge(int age);
	void setGender(char gender);
	void setAlive(bool alive);

	string toString();
};

