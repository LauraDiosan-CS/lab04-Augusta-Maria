#pragma once
#include "Player.h"

class Repo {
private:
	Player jucatori[100];
	int n;
public:
	Repo();
	~Repo();
	int GasestePlayer(Player p);
	void Add(Player p);
	void Delete(Player p);
	void Update(int poz, Player p);
	int getSize();
	Player* getAll();
};