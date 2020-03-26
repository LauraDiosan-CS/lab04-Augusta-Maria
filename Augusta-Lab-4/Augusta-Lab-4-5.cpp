#include <iostream>
#include "Player.h"
#include "Repository.h"
#include "Teste.h"
using namespace std;

void Meniu() {
    cout << endl;
    cout << "       MENIU" << endl;
    cout << endl;
    cout << "0. Iesire" << endl;
    cout << "1. Adauga jucator" << endl;
    cout << "2. Afiseaza toti jucatorii" << endl;
    cout << "3. Sterge jucator" << endl;
    cout << "4. Updateaza jucator" << endl;
}

void Add(Service& S) {
    char nume[100];
    int jocuri;
    int castiguri;
    cout << endl;
    cout << "Introduceti numele jucatorului: ";
    cin >> nume;
    cout << "Introduceti numarul de jocuri jucate: ";
    cin >> jocuri;
    cout << "Introduceti numarul de castiguri: ";
    cin >> castiguri;
    Player p(nume, jocuri, castiguri);
    S.Add(p);
    cout << endl;
    cout << "   Jucator adaugat!" << endl;
}

void Afisare(Service& S) {
    cout << endl;
    cout << "     Jucatori" << endl;
    cout << endl;
    for (int i = 0; i < S.getSize(); i++) {
        cout << " " << S.getAll()[i] << endl;
    }
}

void Stergere(Service& S) {
    Afisare(S);
    char nume[100];
    int jocuri;
    int castiguri;
    cout << endl;
    cout << "Introduceti numele jucatorului: ";
    cin >> nume;
    cout << "Introduceti numarul de jocuri jucate: ";
    cin >> jocuri;
    cout << "Introduceti numarul de castiguri: ";
    cin >> castiguri;
    Player p(nume, jocuri, castiguri);
    S.Delete(p);
    cout << endl;
    cout << "        Jucator sters!" << endl;
}

void Updatare(Service& S) {
    Afisare(S);
    char nume[100];
    int jocuri;
    int castiguri;
    char nume_u[100];
    int jocuri_u;
    int castiguri_u;
    cout << endl;
    cout << "Introduceti numele jucatorului: ";
    cin >> nume;
    cout << "Introduceti numarul de jocuri jucate: ";
    cin >> jocuri;
    cout << "Introduceti numarul de castiguri: ";
    cin >> castiguri;
    Player p(nume, jocuri, castiguri);
    int poz = S.GasestePlayer(p);
    if (poz >= 0) {
        cout << endl;
        cout << "Introduceti noul nume al jucatorului: ";
        cin >> nume_u;
        cout << "Introduceti noul numar de jocuri jucate: ";
        cin >> jocuri_u;
        cout << "Introduceti noul numar de castiguri: ";
        cin >> castiguri_u;
        Player p1(nume_u, jocuri_u, castiguri_u);
        S.Update(poz, p1);
        cout << endl;
        cout << "       Jucator updatat!" << endl;
    }
    else {
        cout << endl;
        cout << "Nu exista jucator cu datele introduse!" << endl;
    }
}

int main()
{
    TestePlayer();
    TesteRepo();
    TesteService();
    Service S;
    int cmd;
    while (true) {
        Meniu();
        cout << endl;
        cout << "Introduceti optiunea: ";
        cin >> cmd;
        if (cmd == 0) {
            break;
        }
        if (cmd == 1) {
            Add(S);
        }
        if (cmd == 2) {
            Afisare(S);
        }
        if (cmd == 3) {
            Stergere(S);
        }
        if (cmd == 4) {
            Updatare(S);
        }
    }
}
