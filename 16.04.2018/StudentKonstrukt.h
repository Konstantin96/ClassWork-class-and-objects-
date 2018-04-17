#pragma once
#include <string>
using namespace std;
class Studentcla {
private:
	string name;
	string sname;
	int age;
public:
	Studentcla():name(""),sname(""),age(0){}
	Studentcla(string name) {
		this->name = name;
		this->sname = "";
		this->age = 0;
	}
	Studentcla(string name, string sname, int age) {
		this->name = name;
		this->sname = sname;
		this->age = age;
	}
	Studentcla(const Studentcla &s) {
		this->name = s.name;
		this->sname = s.sname;
		this->age = s.age;
	}
	~Studentcla(){
		cout << "Destructor" << endl;
	}
	void print() {
		cout << name << " " << sname << " "<<age<<endl;
	}
};