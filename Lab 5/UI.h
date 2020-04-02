#pragma once
#include<iostream>
#include<vector>
#include"Service.h"
#include"Player.h"
using namespace std;

class UI
{
private:
	Service S;
	void Meniu();
	void Adauga();
	void Afisare();
	void Stergere();
	void Actualizare();
	void Pierdute();
	void Top();
public:
	UI();
	~UI();
	void Run();
};

