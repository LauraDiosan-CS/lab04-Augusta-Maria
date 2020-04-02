#pragma once
#include"Player.h"

class Repo {
private:
	Player jucatori[100];
	int n;
public:
	Repo();
	~Repo();
	int GasesteJucator(Player p);
	void Adauga(Player p);
	void Sterge(Player p);
	void Actualizeaza(int poz, Player p);
	int getSize();
	Player* getAll();

};
