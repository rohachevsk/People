#include <iostream>
#include "People.h"
using namespace std;
People::~People()
{
	cout << "destructor\n";
	delete[] name;
	delete[] surname;
}

void People::init(const char* n, const char* s, int a)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	surname = new char[strlen(s) + 1];
	strcpy_s(surname, strlen(s) + 1, s);
	age = a;
}

void People::print()
{
	cout << "Name:  " << name << "  Surname:  " << surname << "  Age:  " << age << endl;
}

void People::setName(const char* n)
{
	delete[]name;
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

void People::setSurname(const char* s)
{
	delete[]surname;
	surname = new char[strlen(s) + 1];
	strcpy_s(surname, strlen(s) + 1, s);
}

void People::setAge(int a)
{
	age = a;
}

const char* People::getName()
{
	return name;
}

const char* People::getSurname()
{
	return surname;
}

int People::getAge()
{
	return age;
}