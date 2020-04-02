#include<iostream>
#include<cassert>
#include"Teste.h"

void TesteRepo() {
	Repo R;
	char nume[8] = "Ronaldo";
	char nume_2[6] = "Messi";
	char nume_3[5] = "Hagi";

	Player p(nume, 100, 100);
	Player p2(nume_2, 500, 499);
	Player p3(nume_3, 1000, 1000);
	R.Adauga(p);
	R.Adauga(p2);
	R.Adauga(p3);
	R.Actualizeaza(1, p3);
	R.Sterge(p3);

	assert(R.GasesteJucator(p) == 0);
	assert(R.getSize() == 2);
	assert(R.getAll()[0] == p);
	assert(R.getAll()[1] == p3);
}

void TesteService() {
	Service S;
	char nume[8] = "Ronaldo";
	char nume_2[6] = "Messi";
	char nume_3[5] = "Hagi";

	Player p(nume, 100, 100);
	Player p2(nume_2, 500, 499);
	Player p3(nume_3, 1000, 1000);
	S.Adauga(p);
	S.Adauga(p2);
	S.Adauga(p3);
	S.Actualizeaza(1, p3);
	S.Sterge(p3);

	assert(S.GasesteJucator(p) == 0);
	assert(S.getSize() == 2);
	assert(S.getAll()[0] == p);
	assert(S.getAll()[1] == p3);
}

void TesteJucator() {
	char nume[8] = "Ronaldo";
	char nume_2[6] = "Messi";
	char nume_3[5] = "Hagi";

	Player p(nume, 100, 100);
	Player p1(nume_2, 500, 499);
	p1.setNume(nume_3);
	p1.setJocuri(150);
	p1.setCastiguri(149);

	assert(strcmp(p.getNume(), nume) == 0);
	assert(p.getJocuri() == 100);
	assert(p.getCastiguri() == 100);
	assert(strcmp(p1.getNume(), nume_3) == 0);
	assert(p1.getJocuri() == 150);
	assert(p1.getCastiguri() == 149);
}