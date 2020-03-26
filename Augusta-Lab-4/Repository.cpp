#include<iostream>
#include "Repository.h"
using namespace std;

Repo::Repo() {
	this->n = 0;
}

Repo::~Repo() {
	this->n = 0;
}

int Repo::GasestePlayer(Player p) {
	for (int i = 0; i < this->n; i++)
		if (p == this->jucatori[i])
			return i;
	return -1;
}

void Repo::Add(Player p) {
	this->jucatori[this->n++] = p;
}

void Repo::Delete(Player p) {
	int poz = GasestePlayer(p);
	if (poz >= 0 && poz <= n - 1) {
		for (int i = poz; i <= n - 2; i++)
			this->jucatori[i] = this->jucatori[i + 1];
		n--;
	}
	else {
		cout << endl;
		cout << "Jucatorul nu exista!" << endl;
	}
}

void Repo::Update(int poz, Player p) {
	jucatori[poz] = p;
}

Player* Repo::getAll() {
	return this->jucatori;
}

int Repo::getSize() {
	return this->n;
}