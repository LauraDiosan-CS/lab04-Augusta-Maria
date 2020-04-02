#pragma once
#include<vector>
#include<algorithm>
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
	int GasesteJucator(Player p);
	void Adauga(Player p);
	void Sterge(Player p);
	void Actualizeaza(int poz, Player p);
	Player* getAll();
	vector<Player> GetPierdute();
	vector < pair<char*, int>> GetTop();
}; 
