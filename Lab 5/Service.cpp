#include<iostream>
#include"Service.h"

Service::Service() {
}

Service::Service(const Repo& R) {
	repo = R;
}

Service::~Service() {
}

int Service::getSize() {
	return repo.getSize();
}

Player* Service::getAll() {
	return repo.getAll();
}

void Service::Adauga(Player p) {
	repo.Adauga(p);
}

void Service::Sterge(Player p) {
	repo.Sterge(p);
}

int Service::GasesteJucator(Player p){
	return repo.GasesteJucator(p);
}

void Service::Actualizeaza(int poz, Player p) {
	repo.Actualizeaza(poz, p);
}

vector<Player> Service::GetPierdute() {
	Player* jucatori = getAll();
	vector<Player> pierdute;
	for (int i = 0; i < getSize(); i++) {
		if (jucatori[i].getCastiguri() == 0) {
			pierdute.push_back(jucatori[i]);
		}
	}
	return pierdute;
}


	/*Player* pierdute = new Player[getSize()];
	int k = 0;
	for (int i = 0; i < getSize(); i++) {
		if (jucatori[i].getCastiguri() == 0) {
			pierdute[k] = jucatori[i];
			k++;
		}
	return pierdute;
	*/




vector< pair<char*, int>> Service::GetTop() {
	Player* jucatori = getAll();
	vector<pair<char*, int>> perechi;
	for (int i = 0; i < getSize(); i++) {
		perechi.push_back(make_pair(jucatori[i].getNume(), jucatori[i].getJocuri()));
	}
	sort(perechi.begin(), perechi.end(), [](auto& left, auto& right) {
		return left.second > right.second;
		});
	return perechi;
}