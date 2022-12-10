#include <iostream>
#include <string>
#include "Person.h"
#include "Angajat.h"
#include "Client.h"
#include "Camera.h"
#include "Hotel.h"
#include "Util.h"
#include "ListaPersoane.h"
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <memory>

using namespace std;

int main() {
    Hotel **hoteluri = new Hotel*[20];
    int numarHoteluri = 1;

    Hotel hotel1("Hilton", 9.1);
    hotel1 += Camera("Single", 200);
    hotel1 += Camera("Double", 350);
    hotel1 += Camera("Single", 220);
    hotel1 += Camera("Triple", 400);
    hotel1 += Camera("Triple", 415);
    hotel1 += Camera("Apartament", 500);
    hotel1 += Angajat("Popescu", "Maria", "receptionist");
    auto A1 = std::make_shared<Angajat>("Popescu", "Maria", "receptionist");
    ListaPersoane::adaugaPersoana(A1);
    hotel1 += Angajat("Popovici", "Alexandru", "receptionist");
    auto A2 = std::make_shared<Angajat>("Popovici", "Alexandru", "receptionist");
    ListaPersoane::adaugaPersoana(A2);
    hotel1 += Angajat("Tudoroiu", "Vlad", "receptionist");
    auto A3 = std::make_shared<Angajat>("Tudoroiu", "Vlad", "receptionist");
    ListaPersoane::adaugaPersoana(A3);
    hotel1 += Angajat("Sandu", "Ana", "camerist");
    auto A4 = std::make_shared<Angajat>("Sandu", "Ana", "camerist");
    ListaPersoane::adaugaPersoana(A4);
    hotel1 += Angajat("Baciu", "Eva", "camerist");
    auto A5 = std::make_shared<Angajat>("Baciu", "Eva", "camerist");
    ListaPersoane::adaugaPersoana(A5);
    hotel1 += Angajat("Ionescu", "Sara", "camerist");
    auto A6 = std::make_shared<Angajat>("Ionescu", "Sara", "camerist");
    ListaPersoane::adaugaPersoana(A6);
    hotel1 += Angajat("Lazar", "Mara", "camerist");
    auto A7 = std::make_shared<Angajat>("Lazar", "Mara", "camerist");
    ListaPersoane::adaugaPersoana(A7);
    hotel1 += Angajat("Munteanu", "Ion", "manager");
    auto A8 = std::make_shared<Angajat>("Munteanu", "Ion", "manager");
    ListaPersoane::adaugaPersoana(A8);
    hoteluri[0] = &hotel1;
    numarHoteluri++;

    Hotel hotel2("Ramada", 8.8);
    hotel2 += Camera("Single", 170);
    hotel2 += Camera("Single", 185);
    hotel2 += Camera("Single", 190);
    hotel2 += Camera("Double", 280);
    hotel2 += Camera("Apartament", 450);
    hotel2 += Angajat("Barbu", "Cosmina", "receptionist");
    auto A9 = std::make_shared<Angajat>("Barbu", "Cosmina", "receptionist");
    ListaPersoane::adaugaPersoana(A9);
    hotel2 += Angajat("Lupu", "Alin", "receptionist");
    auto A10 = std::make_shared<Angajat>("Lupu", "Alin", "receptionist");
    ListaPersoane::adaugaPersoana(A10);
    hotel2 += Angajat("Neagu", "Monica", "receptionist");
    auto A11 = std::make_shared<Angajat>("Neagu", "Monica", "receptionist");
    ListaPersoane::adaugaPersoana(A11);
    hotel2 += Angajat("Coman", "Andreea", "camerist");
    auto A12 = std::make_shared<Angajat>("Coman", "Andreea", "camerist");
    ListaPersoane::adaugaPersoana(A12);
    hotel2 += Angajat("Gherghescu", "Andreea", "camerist");
    auto A13 = std::make_shared<Angajat>("Gherghescu", "Andreea", "camerist");
    ListaPersoane::adaugaPersoana(A13);
    hotel2 += Angajat("Potlog", "Ioana", "manager");
    auto A14 = std::make_shared<Angajat>("Potlog", "Ioana", "manager");
    ListaPersoane::adaugaPersoana(A14);
    hoteluri[1] = &hotel2;
    numarHoteluri++;

    Hotel hotel3("Rin", 8.5);
    hotel3 += Camera("Single", 140);
    hotel3 += Camera("Double", 250);
    hotel3 += Camera("Double", 270);
    hotel3 += Camera("Triple", 340);
    hotel3 += Camera("Apartament", 500);
    hotel3 += Camera("Apartament", 450);
    hotel3 += Angajat("Delureanu", "Ana", "receptionist");
    auto A15 = std::make_shared<Angajat>("Delureanu", "Ana", "receptionist");
    ListaPersoane::adaugaPersoana(A15);
    hotel3 += Angajat("Glodeanu", "Alexandru", "receptionist");
    auto A16 = std::make_shared<Angajat>("Glodeanu", "Alexandru", "receptionist");
    ListaPersoane::adaugaPersoana(A16);
    hotel3 += Angajat("Oltean", "Delia", "receptionist");
    auto A17 = std::make_shared<Angajat>("Oltean", "Delia", "receptionist");
    ListaPersoane::adaugaPersoana(A17);
    hotel3 += Angajat("Brasoveanu", "Daniel", "camerist");
    auto A18 = std::make_shared<Angajat>("Brasoveanu", "Daniel", "camerist");
    ListaPersoane::adaugaPersoana(A18);
    hotel3 += Angajat("Dragomir", "Elena", "camerist");
    auto A19 = std::make_shared<Angajat>("Dragomir", "Elena", "camerist");
    ListaPersoane::adaugaPersoana(A19);
    hotel3 += Angajat("Marinescu", "Eliza", "camerist");
    auto A20 = std::make_shared<Angajat>("Marinescu", "Eliza", "camerist");
    ListaPersoane::adaugaPersoana(A20);
    hotel3 += Angajat("Udroiu", "Laura", "camerist");
    auto A21 = std::make_shared<Angajat>("Udroiu", "Laura", "camerist");
    ListaPersoane::adaugaPersoana(A21);
    hotel3 += Angajat("Glodeanu", "Alexandru", "receptionist");
    auto A23 = std::make_shared<Angajat>("Dobre", "Alexandru", "camerist");
    ListaPersoane::adaugaPersoana(A23);
    hotel3 += Angajat("Bouruc", "Liviu", "manager");
    auto A22 = std::make_shared<Angajat>("Bouruc", "Liviu", "manager");
    ListaPersoane::adaugaPersoana(A22);
    hoteluri[2] = &hotel3;
    numarHoteluri++;

    bool quit = false;
    do {
        cout << endl;
        cout << "0. Exit" << endl;
        cout << "1. Afisare toate hotelurile." << endl;
        cout << "2. Adauga hotel." << endl;
        cout << "3. Adauga camere intr-un hotel." << endl;
        cout << "4. Cauta hotel dupa nume." << endl;
        cout << "5. Cauta camere intr-un hotel." << endl;
        cout << "6. Introduceti client." << endl;
        cout << "7. Adauga angajati intr-un hotel." << endl;
        cout << "8. Cautati angajatii dupa post." << endl;
        cout << "9. Cautati persoane (angajati initiali) dupa prenume in hotelurile Rin, Hilton si Ramada." << endl;

        int x;
        cout << "Alegeti o optiune:" << endl;
        cin >> x;
        cout << "Ati ales" << ' ' << x << endl;
        cout << endl;
        switch (x) {
            case 1: {
                for (int i = 0; i < numarHoteluri - 1; i++) {
                    cout << *hoteluri[i];
                    cout << endl;
                }
                break;
            }

            case 2: {
                Hotel hotelNou;
                cin >> hotelNou;
                Hotel* h = new Hotel(hotelNou);
                hoteluri[numarHoteluri - 1] = h;
                cout << hotelNou;
                numarHoteluri++;
                cout << endl;
                cout << "Hotelul a fost adaugat cu succes! Pentru a adauga camere si angajati in el apasati 3(camere) sau 7(angajati).";
                break;
            }

            case 3: {
                char h[30];
                int nr = 0;
                cout << "In ce hotel vreti sa adaugati camere?" << endl;
                cin >> h;
                for (int i = 0; i < numarHoteluri - 1; ++i) {
                    if (h == hoteluri[i]->getNume()) {
                        nr++;
                        int m;
                        cout << "Numarul de camere care vreti sa fie adaugate este:";
                        cin >> m;
                        Camera a[m];
                        cout << endl;
                        cout << "Aceste camere(tip Single/Double/Triple/Apartament pret) sunt:";
                        for (int j = 0; j < m; j++) {
                            a[j].citireCamera();
                            *hoteluri[i] += a[j];
                        }
                        cout << *hoteluri[i];
                        cout << endl;
                        break;
                    }
                }
                if(nr == 0) {
                    cout << "Nu am gasit acest hotel." << endl;
                }
                break;
            }

            case 4: {
                char k[30];
                int nr = 0;
                cout << "Cum se numeste hotelul pe care il cautati?" << endl;
                cin >> k;
                for (int i = 0; i < numarHoteluri - 1; ++i) {
                    if (k == hoteluri[i]->getNume()) {
                        cout << *hoteluri[i];
                        nr++;
                        break;
                    }
                }
                if (nr == 0) {
                    cout << "Nu am gasit acest hotel." << endl;
                }
                break;
            }

            case 5: {
                char h[30], c[30];
                int nr = 0;
                cout << "Ce camera cautati? (Single/Double/Triple/Apartament)" << endl;
                cin >> c;
                cout << "Cum se numeste hotelul in care cautati camera?" << endl;
                cin >> h;
                for (int i = 0; i < numarHoteluri - 1; ++i) {
                    if (h == hoteluri[i]->getNume()) {
                        hoteluri[i]->cautareCamera(c);
                        nr++;
                    }
                }
                if (nr == 0)
                    cout << "Nu am gasit acest hotel." << endl;
                break;
            }

            case 6: {
                char h[30];
                char c[30];
                int w, y;
                int nr = 0;
                char pr[30], na[30], tr[30];
                cout << "Introduceti datele clientului:" << endl;
                cout << "Nume de familie:";
                cin >> na;
                cout << "Prenume:";
                cin >> pr;
                cout << "Tara de provenienta:";
                cin >> tr;
                cout << "Ce camera cautati? (Single/Double/Triple/Apartament)" << endl;
                cin >> c;
                cout << "Cum se numeste hotelul in care cautati camera?" << endl;
                cin >> h;
                for (int i = 0; i < numarHoteluri - 1; ++i) {
                    if (h == hoteluri[i]->getNume()) {
                        w = hoteluri[i]->getCamereDisponibile();
                        hoteluri[i]->cautareCameraClient(c);
                        y = hoteluri[i]->getCamereDisponibile();
                        if (w != y){
                            *hoteluri[i]+=Client(pr,na,tr);
                        }
                        nr++;
                    }
                }
                if (nr == 0)
                    cout << "Nu am gasit acest hotel." << endl;
                break;
            }

            case 7: {
                char h[30];
                int nr = 0;
                cout << "In ce hotel vreti sa adaugati angajati?" << endl;
                cin >> h;
                for (int i = 0; i < numarHoteluri - 1; ++i) {
                    if (h == hoteluri[i]->getNume()) {
                        nr++;
                        int m;
                        cout << "Numarul de angajati care vreti sa fie adaugati este:";
                        cin >> m;
                        Angajat a[m];
                        cout << endl;
                        cout << "Introduceti angajatii:";
                        for (int j = 0; j < m; j++) {
                            a[j].citireAngajat();
                            *hoteluri[i] += a[j];
                        }
                        cout << *hoteluri[i];
                        cout << endl;
                        break;
                    }
                }
                if(nr == 0) {
                    cout << "Nu am gasit acest hotel." << endl;
                }
                break;
            }

            case 8: {
                char h[30], c[30];
                int nr = 0;
                cout << "Ce post au angajatii cautati?" << endl;
                cin >> c;
                cout << "Cum se numeste hotelul in care cautati angajatii?" << endl;
                cin >> h;
                for (int i = 0; i < numarHoteluri - 1; ++i) {
                    if (h == hoteluri[i]->getNume()) {
                        hoteluri[i]->cautareAngajat(c);
                        nr++;
                    }
                }
                if (nr == 0)
                    cout << "Nu am gasit acest hotel." << endl;
                break;
            }

            case 9:{
                string c;
                cout << "Ce prenume are persoana pe care o cautati?" << endl;
                cin >> c;
                char v[30];
                strcpy(v, c.c_str());
                for (int i = 0; i < 3; ++i){
                    cout << endl;
                    cout << hoteluri[i]->getNume() << ':' << endl;
                    hoteluri[i]->cautareAngajatDupaPrenume(v);

                }

                cout << endl;
                ListaPersoane::cautaPersoana(c);

                break;
            }

            default: {
                cout << "Numar invalid." << endl;
                break;
            }

            case 0:
                quit = true;
        }
    }

    while(!quit);
    return 0;
}