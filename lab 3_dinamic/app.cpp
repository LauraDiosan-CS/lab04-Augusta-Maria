#include<iostream>
#include "Input.h"
#include "Logic.h"
using namespace std;
void menu() {
	cout << endl;
	cout << "	MENU \n";
	cout << endl;
	cout << "0. Exit \n";
	cout << "1. Add list \n";
	cout << "2. Show list \n";
	cout << "3. Distinct numbers\n";
	cout << "4. Prime difference\n";
}
int main() {
	int l = 0;
	int* x = new int[1000];
	int cmd;
	while (true) {
		menu();
		cout << endl;
		cout << "Insert your option: ";
		cin >> cmd;
		if (cmd == 0) {
			delete[]x;
			break;
		}
		if (cmd == 1) {
			cout << endl;
			citireSir(l, x);
		}
		if (cmd == 2) {
			cout << endl;
			afisareSir(0, l - 1, x);
		}
		if (cmd == 3) {
			cout << endl;
			secventeDistincte(x, l);
		}
		if (cmd == 4) {
			cout << endl;
			secventeDifPrim(x, l);
		}
	}
	return 0;


}
