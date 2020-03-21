#include<iostream>
#include "Input.h"
#include "Logic.h"
using namespace std;

void secventeDistincte(int v[], int n) {
	int lungimeCur, lungimeMaxima, st, stMax;
	lungimeCur = lungimeMaxima = st = stMax = 0;
	bool apare;
	for (int i = 0; i < n; i++) {
		st = i;
		lungimeCur = 1;
		for (int j = i + 1; j < n; j++) {
			apare = false;
			for (int k = j - 1; k >= i; k--) {
				if (v[j] == v[k]) {
					apare = true;
					break;
				}
			}
			if (apare == false) {
				lungimeCur++;
			}
			if (lungimeMaxima < lungimeCur) {
				stMax = st;
				lungimeMaxima = lungimeCur;
			}
			if (apare == true) {
				break;
			}
		}
	}
	afisareSir(stMax, stMax + lungimeMaxima - 1, v);
}

void secventeDifPrim(int v[], int n)
{
	int lungimeCur, lungimeMaxima, st, stMax;
	lungimeCur = lungimeMaxima = st = stMax = 0;
	int diferenta;
	lungimeCur = 1;
	st = 0;
	bool prim;
	for (int i = 1; i < n; i++) {
		diferenta = abs(v[i] - v[i - 1]);
		prim = true;
		for (int j = 2; j < diferenta; j++) {
			if (diferenta % j == 0) {
				prim = false;
			}
		}
		if (diferenta == 2)
			prim = true;
		if (diferenta == 1 || diferenta == 0)
			prim = false;
		if (prim == true)
			lungimeCur++;
		else {
			if (lungimeMaxima < lungimeCur) {
				stMax = st;
				lungimeMaxima = lungimeCur;
			}
			lungimeCur = 1;
			st = i;
		}
	}
	if (lungimeMaxima < lungimeCur) {
		stMax = st;
		lungimeMaxima = lungimeCur;
	}
	afisareSir(stMax, stMax + lungimeMaxima - 1, v);
}