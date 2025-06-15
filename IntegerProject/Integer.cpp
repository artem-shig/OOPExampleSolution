#include "Integer.h"

Integer Integer::add(Integer num) {
	Integer i(value + num.value);
	return i;
}

Integer Integer::sub(Integer num) {
	return Integer(value - num.value);
}

Integer Integer::mul(Integer num) {
	return Integer(value * num.value);
}

Integer Integer::div(Integer num) {
	if (num.value != 0) {
		return Integer(value / num.value);
	}
	return Integer();
}

Integer Integer::mod(Integer num) {
	if (num.value != 0) {
		return Integer(value % num.value);
	}
	return Integer();
}

Integer Integer::minus() {
	return Integer(-value);
}

Integer Integer::increment() {
	value++;
	return Integer(value);
}

Integer Integer::decrement() {
	value--;
	return Integer(value);
}

int Integer::getValue() {
	return value;
}

void Integer::setValue(int value) {
	this->value = value;
}