#include<iostream>
using namespace std;
void citireSir(int& n, int v[]) {
	cout << "Insert length:";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Insert number: ";
		cin >> v[i];
	}
}
void afisareSir(int p1, int p2, int v[]) {
	for (int i = p1; i <= p2; i++)
		cout << v[i] << " ";
}