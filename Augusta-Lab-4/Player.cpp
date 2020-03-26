#include "Player.h"
#include <cstddef>
#include <string.h>
#include <ostream>
#include <iostream>

using namespace std;

Player::Player() {
	this->nume = NULL;
	this->jocuri = 0;
	this->castiguri = 0;
}

Player::~Player() {
	this->nume = NULL;
	this->jocuri = 0;
	this->castiguri = 0;
}

Player::Player(char* nume, int jocuri, int castiguri)
{
	this->nume = new char[strlen(nume) + 1];
	strcpy_s(this->nume, 1 + strlen(nume), nume);
	this->jocuri = jocuri;
	this->castiguri = castiguri;
}

Player::Player(const Player& p) {
	this->nume = new char[strlen(p.nume) + 1];
	strcpy_s(this->nume, 1 + strlen(p.nume), p.nume);
	this->jocuri = p.jocuri;
	this->castiguri = p.castiguri;
}

char* Player::getNume() {
	return this->nume;
}

int Player::getJocuri() {
	return this->jocuri;
}

int Player::getCastiguri() {
	return this->castiguri;
}

void Player::setNume(char* nume)
{
	if (this->nume) {
		delete[] this->nume;
	}
	this->nume = new char[strlen(nume) + 1];
	strcpy_s(this->nume, strlen(nume) + 1, nume);
}

void Player::setJocuri(int jocuri) {
	this->jocuri = jocuri;
}

void Player::setCastiguri(int castiguri) {
	this->castiguri = castiguri;
}

Player& Player::operator=(const Player& p) {
	this->setNume(p.nume);
	this->setJocuri(p.jocuri);
	this->setCastiguri(p.castiguri);
	return *this;
}

bool Player:: operator==(const Player& p) {
	return ((strcmp(this->nume, p.nume) == 0) && (this->jocuri == p.jocuri) && (this->castiguri == p.castiguri));
}

ostream& operator<<(ostream& os, const Player& p)
{
	os << "Nume: " << p.nume << " Jocuri jucate: " << p.jocuri << " Jocuri castigate: " << p.castiguri;
	return os;
}
