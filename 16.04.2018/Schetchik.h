#ifndef  _SCHETCHIK_H_
#define _SCHETCHIK_H_
#include <string>
#include <iostream>
using namespace std;

class Schetchik {
private:
	int k, min, max, k2;
public:
	void Chet() {
		int k2 = 0, min = 0, max = 100;
	}
	void InMin(int b) {
		min = b;
		k = min;
	}
	void InMax(int d) {
		max = d;
	}
	void Plus() {
		k++;
		if (k >= (max + 1))
		{
			k2++;
			k = min;
		}
	}
	void Show() {
		cout << k2 << " : " << k << endl;
	}
};
#endif