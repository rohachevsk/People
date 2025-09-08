#pragma once
class People
{
	char* name;
	char* surname;
	int age;
public:
	~People();
	void init(const char* n, const char* s, int a);
	void print();
	void setName(const char* n);
	void setSurname(const char* s);
	void setAge(int a);
	const char* getName();
	const char* getSurname();
	int getAge();
};

