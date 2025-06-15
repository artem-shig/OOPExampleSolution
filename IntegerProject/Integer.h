#include "main.h"

class Integer {

private:

	int value;

public:

	Integer() : value(0) { }
	Integer(int value) : value(value) { }

	Integer add(Integer num);
	Integer sub(Integer num);
	Integer mul(Integer num);
	Integer div(Integer num);
	Integer mod(Integer num);
	Integer minus();
	Integer increment();
	Integer decrement();

	int getValue();
	void setValue(int value);

};
