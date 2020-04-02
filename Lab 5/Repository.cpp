#include<iostream>
#include"Repository.h"
using namespace std;

Repo::Repo(){
	this->n = 0;
}

Repo::~Repo() {
	this->n = 0;
}

int Repo::GasesteJucator(Player p) {
	for (int i = 0; i < this->n; i++)
		if (p == this->jucatori[i])
			return i;
	return -1;
}

void Repo::Adauga(Player p) {
	this->jucatori[this->n++] = p;
}

void Repo::Sterge(Player p) {
	int poz = GasesteJucator(p);
	if (poz >= 0 && poz <= n - 1) {
		for (int i = poz; i <= n - 2; i++)
			this->jucatori[i] = jucatori[i + 1];
		n--;
	}
	else {
		cout << endl;
		cout << "Jucatorul nu exista";

	}
}

void Repo::Actualizeaza(int poz, Player p) {
	jucatori[poz] = p;
}

Player* Repo::getAll() {
	return this->jucatori;
}

int Repo::getSize() {
	return this->n;
}

