#include "student.h"
#include "Schetchik.h"
#include <time.h>

int main() {
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	cout << "Vvedite nomer zadaniya: ";
	int nz;
	cin >> nz;
	cin.ignore();
	if (nz == 1)
	{
		int n;
		string name;
		int age;

		Student *stud;
		cout << "Enter number of students: ";
		cin >> n;
		stud = new Student[n];
		cin.ignore();

		for (int i = 0; i < n; i++) {
			cout << "Enter name: ";
			getline(cin, name, '\n');
			age = rand() % 15 + 15;
			/*stud[i].set(name, age);*/
			stud[i].setName(name);
			stud[i].setAge(age);
		}
		cout << "\n\n";
		for (int i = 0; i < n; i++) {
			cout << stud[i].getName() << " - " << stud[i].getAge() << " age\n";
			cout << "Ocenki\n";
			stud[i].ocenki();
		}
	}
	else if (nz == 2)
	{
		Schetchik schet;
		int omax = 0, omin = 0, key = 0;
		do
		{
			cout << "Vvedite min znacheniye: ";
			cin >> omin;
			cout << "Vvedite max znacheniye: ";
			cin >> omax;
			if ((omax < omin) || (omin == omax))
			{
				cout << "Min znacheniye dolzhno byt bolshe max\n";
			}
		} while ((omax < omin) || (omin == omax));
		schet.InMin(omin);
		schet.InMax(omax);
		system("pause");
		system("cls");
		do
		{
			cout << "1. Uvelicheniye schetchika na 1\n2. Vivod znacheniya schetchika\n0.Vihod\n";
			cin >> key;
			switch (key)
			{
			case 1:
				schet.Plus();
				system("pause");
				break;
			case 2:
				schet.Show();
				system("pause");
				system("cls");
				break;
			case 0:
				cout << "BYE BYE!!!\n";
				break;
			default:
				cout << "Vibrano ne pravilnoe zadanie\n";
				system("pause");
				system("cls");
				break;
			}
		} while (key!=0);
	}
	else
		cout << "Dannogo zadaniya net!";
	system("pause");
	return 0;
}