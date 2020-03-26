#pragma once
#include"Player.h"
#include"Repository.h"
using namespace std;

class Service {
private:
	Repo repo;
public:
	Service();
	~Service();
	Service(const Repo&);
	int getSize();
	int GasestePlayer(Player p);
	void Add(Player p);
	void Delete(Player p);
	void Update(int poz, Player p);
	Player* getAll();
};