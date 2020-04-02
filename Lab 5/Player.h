#pragma once
#include <ostream>
using namespace std;

class Player {
private:
	char* nume;
	int jocuri;
	int castiguri;
public:
	Player();
	Player(char* nume, int jocuri, int castiguri);
	Player(const Player& p);
	~Player();
	char* getNume();
	int getJocuri();
	int getCastiguri();
	void setNume(char* nume);
	void setJocuri(int jocuri);
	void setCastiguri(int castiguri);
	Player& operator=(const Player& p);
	bool operator==(const Player& p);
	friend ostream& operator<<(ostream& os, const Player& p);



};

