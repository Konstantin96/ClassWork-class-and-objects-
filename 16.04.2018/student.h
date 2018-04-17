#ifndef  _STUDENT_H_
#define _STUDENT_H_
#include <string>
#include <iostream>
using namespace std;

class Student {
private:
	string name;
	int age;
	int grades[5];
public:
	//mutators
	void setName(const string &name) {
		this->name = name;
	}
	void setAge(const int &age) {
		this->age = age;
	}
	//accessors
	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
	///////////////////////////////////////////////
	void set(const string &name, const int &age) {
		this->name = name;
		this->age = age;
	}
	void print() {
		cout << name << " - " << age << " age\n";
	}
	void ocenki() {
		for (int i = 0; i < 5; i++)
		{
			this->grades[i] = rand() % 1 + 11;
		}
		for (int i = 0; i < 5; i++)
		{
			cout << grades[i] << "\t";
		}
		cout << "\n\n";
	}
};
#endif // ! _STUDENT_H_
