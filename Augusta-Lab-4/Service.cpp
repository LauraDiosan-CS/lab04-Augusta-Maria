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

void Service::Add(Player p) {
	repo.Add(p);
}

void Service::Delete(Player p) {
	repo.Delete(p);
}

int Service::GasestePlayer(Player p) {
	return repo.GasestePlayer(p);
}

void Service::Update(int poz, Player p) {
	repo.Update(poz, p);
}
