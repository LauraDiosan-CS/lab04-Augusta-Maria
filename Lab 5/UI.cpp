#include "UI.h"

UI::UI() {
}

UI::~UI() {
}

void UI::Meniu() {
    cout << endl;
    cout << "       MENIU" << endl;
    cout << endl;
    cout << "0. Iesire" << endl;
    cout << "1. Adauga jucator" << endl;
    cout << "2. Afiseaza toti jucatorii" << endl;
    cout << "3. Sterge jucator" << endl;
    cout << "4. Updateaza jucator" << endl;
    cout << "5. Jucatori fara jocuri castigate" << endl;
    cout << "6. Top jucatori dupa jocuri jucate" << endl;
}

void UI::Adauga() {
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
    S.Adauga(p);
    cout << endl;
    cout << "   Jucator adaugat!" << endl;
}

void UI::Afisare() {
    cout << endl;
    cout << "     Jucatori" << endl;
    cout << endl;
    for (int i = 0; i < S.getSize(); i++) {
        cout << " " << S.getAll()[i] << endl;
    }
}

void UI::Stergere() {
    Afisare();
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
    S.Sterge(p);
    cout << endl;
    cout << "        Jucator sters!" << endl;
}

void UI::Actualizare() {
    Afisare();
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
    int poz = S.GasesteJucator(p);
    if (poz >= 0) {
        cout << endl;
        cout << "Introduceti noul nume al jucatorului: ";
        cin >> nume_u;
        cout << "Introduceti noul numar de jocuri jucate: ";
        cin >> jocuri_u;
        cout << "Introduceti noul numar de castiguri: ";
        cin >> castiguri_u;
        Player p1(nume_u, jocuri_u, castiguri_u);
        S.Actualizeaza(poz, p1);
        cout << endl;
        cout << "       Jucator updatat!" << endl;
    }
    else {
        cout << endl;
        cout << "Nu exista jucator cu datele introduse!" << endl;
    }
}

void UI::Pierdute() {
    vector<Player> losers = S.GetPierdute();
    cout << endl;
    cout << "   Pierzatori" << endl;
    cout << endl;
    for (Player p : losers) {
        cout << p << endl;
    }
}

void UI::Top() {
    vector< pair<char*, int >> top = S.GetTop();
    cout << endl;
    cout << "   Top jucatori" << endl;
    cout << endl;
    for (pair<char*, int> p : top) {
        cout << "Nume: " << p.first << " Jocuri jucate: " << p.second << endl;
    }
}

void UI::Run() {
    bool ok = false;
    while (!ok) {
        Meniu();
        int cmd;
        cout << endl;
        cout << "Introduceti optiunea: ";
        cin >> cmd;
        switch (cmd)
        {
        case(0): { ok = true; break; }
        case(1): { Adauga(); break; }
        case(2): { Afisare(); break; }
        case(3): { Stergere(); break; }
        case(4): {Actualizare(); break; }
        case(5): {Pierdute(); break; }
        case(6): {Top(); break; }
        }
    }
}