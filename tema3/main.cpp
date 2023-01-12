#include <iostream>
#include <string>
#include "Restaurant.h"
#include "Muzeu.h"
#include "Teatru.h"
#include "Person.h"
#include "Angajat.h"
#include "Client.h"
#include "Camera.h"
#include "Hotel.h"
#include "Util.h"
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <memory>
#include "Atractii.cpp"


using namespace std;

int main() {

    Hotel **hoteluri = new Hotel *[20];
    int numarHoteluri = 1;

    Hotel hotel1("Hilton", 9.1);
    hotel1 += Camera("Single", 200);
    hotel1 += Camera("Double", 350);
    hotel1 += Camera("Single", 220);
    hotel1 += Camera("Triple", 400);
    hotel1 += Camera("Triple", 415);
    hotel1 += Camera("Apartament", 500);
    hotel1 += Angajat("Popescu", "Maria", "receptionist");
//    auto A1 = std::make_shared<Angajat>("Popescu", "Maria", "receptionist");
//    ListaPersoane::adaugaPersoana(A1);
    hotel1 += Angajat("Popovici", "Alexandru", "receptionist");
//    auto A2 = std::make_shared<Angajat>("Popovici", "Alexandru", "receptionist");
//    ListaPersoane::adaugaPersoana(A2);
    hotel1 += Angajat("Tudoroiu", "Vlad", "receptionist");
//    auto A3 = std::make_shared<Angajat>("Tudoroiu", "Vlad", "receptionist");
//    ListaPersoane::adaugaPersoana(A3);
    hotel1 += Angajat("Sandu", "Ana", "camerist");
//    auto A4 = std::make_shared<Angajat>("Sandu", "Ana", "camerist");
//    ListaPersoane::adaugaPersoana(A4);
    hotel1 += Angajat("Baciu", "Eva", "camerist");
//    auto A5 = std::make_shared<Angajat>("Baciu", "Eva", "camerist");
//    ListaPersoane::adaugaPersoana(A5);
    hotel1 += Angajat("Ionescu", "Sara", "camerist");
//    auto A6 = std::make_shared<Angajat>("Ionescu", "Sara", "camerist");
//    ListaPersoane::adaugaPersoana(A6);
    hotel1 += Angajat("Lazar", "Mara", "camerist");
//    auto A7 = std::make_shared<Angajat>("Lazar", "Mara", "camerist");
//    ListaPersoane::adaugaPersoana(A7);
    hotel1 += Angajat("Munteanu", "Ion", "manager");
//    auto A8 = std::make_shared<Angajat>("Munteanu", "Ion", "manager");
//    ListaPersoane::adaugaPersoana(A8);
    hoteluri[0] = &hotel1;
    numarHoteluri++;

    Hotel hotel2("Ramada", 8.8);
    hotel2 += Camera("Single", 170);
    hotel2 += Camera("Single", 185);
    hotel2 += Camera("Single", 190);
    hotel2 += Camera("Double", 280);
    hotel2 += Camera("Apartament", 450);
    hotel2 += Angajat("Barbu", "Cosmina", "receptionist");
//    auto A9 = std::make_shared<Angajat>("Barbu", "Cosmina", "receptionist");
//    ListaPersoane::adaugaPersoana(A9);
    hotel2 += Angajat("Lupu", "Alin", "receptionist");
//    auto A10 = std::make_shared<Angajat>("Lupu", "Alin", "receptionist");
//    ListaPersoane::adaugaPersoana(A10);
    hotel2 += Angajat("Neagu", "Monica", "receptionist");
//    auto A11 = std::make_shared<Angajat>("Neagu", "Monica", "receptionist");
//    ListaPersoane::adaugaPersoana(A11);
    hotel2 += Angajat("Coman", "Andreea", "camerist");
//    auto A12 = std::make_shared<Angajat>("Coman", "Andreea", "camerist");
//    ListaPersoane::adaugaPersoana(A12);
    hotel2 += Angajat("Gherghescu", "Andreea", "camerist");
//    auto A13 = std::make_shared<Angajat>("Gherghescu", "Andreea", "camerist");
//    ListaPersoane::adaugaPersoana(A13);
    hotel2 += Angajat("Potlog", "Ioana", "manager");
//    auto A14 = std::make_shared<Angajat>("Potlog", "Ioana", "manager");
//    ListaPersoane::adaugaPersoana(A14);
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
//    auto A15 = std::make_shared<Angajat>("Delureanu", "Ana", "receptionist");
//    ListaPersoane::adaugaPersoana(A15);
    hotel3 += Angajat("Glodeanu", "Alexandru", "receptionist");
//    auto A16 = std::make_shared<Angajat>("Glodeanu", "Alexandru", "receptionist");
//    ListaPersoane::adaugaPersoana(A16);
    hotel3 += Angajat("Oltean", "Delia", "receptionist");
//    auto A17 = std::make_shared<Angajat>("Oltean", "Delia", "receptionist");
//    ListaPersoane::adaugaPersoana(A17);
    hotel3 += Angajat("Brasoveanu", "Daniel", "camerist");
//    auto A18 = std::make_shared<Angajat>("Brasoveanu", "Daniel", "camerist");
//    ListaPersoane::adaugaPersoana(A18);
    hotel3 += Angajat("Dragomir", "Elena", "camerist");
//    auto A19 = std::make_shared<Angajat>("Dragomir", "Elena", "camerist");
//    ListaPersoane::adaugaPersoana(A19);
    hotel3 += Angajat("Marinescu", "Eliza", "camerist");
//    auto A20 = std::make_shared<Angajat>("Marinescu", "Eliza", "camerist");
//    ListaPersoane::adaugaPersoana(A20);
    hotel3 += Angajat("Udroiu", "Laura", "camerist");
//    auto A21 = std::make_shared<Angajat>("Udroiu", "Laura", "camerist");
//    ListaPersoane::adaugaPersoana(A21);
    hotel3 += Angajat("Dobre", "Alexandru", "camerist");
//    auto A23 = std::make_shared<Angajat>("Dobre", "Alexandru", "camerist");
//    ListaPersoane::adaugaPersoana(A23);
    hotel3 += Angajat("Bouruc", "Liviu", "manager");
//    auto A22 = std::make_shared<Angajat>("Bouruc", "Liviu", "manager");
//    ListaPersoane::adaugaPersoana(A22);
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
        cout << "10. Afisare ID angajati dintr-un hotel." << endl;
        cout << "11. Afisare atractii recomandate. (clasa template)" << endl;
        cout << "12. Reducere 50% la bilete elev pentru muzeu. (metoda template)" << endl;
        cout << "13. Reducere 75% la bilete elev pentru teatru. (metoda template specializata)" << endl;

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
                Hotel *h = new Hotel(hotelNou);
                hoteluri[numarHoteluri - 1] = h;
                cout << hotelNou;
                numarHoteluri++;
                cout << endl;
                cout
                        << "Hotelul a fost adaugat cu succes! Pentru a adauga camere si angajati in el apasati 3(camere) sau 7(angajati).";
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
                if (nr == 0) {
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
                        if (w != y) {
                            *hoteluri[i] += Client(pr, na, tr);
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
                if (nr == 0) {
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
//
            case 9: {
                string c;
                cout << "Ce prenume are persoana pe care o cautati?" << endl;
                cin >> c;
                char v[30];
                strcpy(v, c.c_str());
                for (int i = 0; i < 3; ++i) {
                    cout << endl;
                    cout << hoteluri[i]->getNume() << ':' << endl;
                    hoteluri[i]->cautareAngajatDupaPrenume(v);

                }

                cout << endl;
//                ListaPersoane::cautaPersoana(c);

                break;
            }

            case 10: {
                //fiecare angajat are id diferit indiferent de hotel
                int nr = 0;
                char h[30];
                cout << "Din ce hotel sunt angajatii carora vreti sa le generati ID?" << endl;
                cin >> h;
                for (int i = 0; i < numarHoteluri - 1; ++i) {
                    if (h == hoteluri[i]->getNume()) {
                        hoteluri[i]->afisareAngajat();
                        nr++;
                    }
                }
                if (nr == 0)
                    cout << "Nu am gasit acest hotel." << endl;

                break;

            }

            case 11: {
                Restaurant r1("Caru' cu bere", "Romanesc");
                Restaurant r2("Sushi Terra", "Japonez");
                Restaurant r3("Trattoria Monza", "Italienesc");
                Muzeu m1("Antipa", 16);
                Muzeu m2("Muzeul de Istorie", 20);
                Muzeu m3("Muzeul satului", 10);
                Teatru t1("Teatrul National Bucuresti", 50);
                Teatru t2("Teatrul de Comedie", 40);
                Teatru t3("Teatrul Tandarica", 30);
//
//                std::cout << r1;
//                std::cout << r2;
//                std::cout << r3;
//                std::cout << m1;
//                std::cout << m2;
//                std::cout << m3;
//                std::cout << t1;
//                std::cout << t2;
//                std::cout << t3;

                Atractii<Restaurant> ar1(r1);
                ar1.setLocatie("Bucuresti");
                ar1.setRatingAtr(8.2);
                std::cout << ar1;
                cout << endl;

                Atractii<Restaurant> ar3(r2);
                ar3.setLocatie("Bucuresti");
                ar3.setRatingAtr(8.4);
                std::cout << ar3;
                cout << endl;

                Atractii<Restaurant> ar4(r3);
                ar4.setLocatie("Bucuresti");
                ar4.setRatingAtr(7.8);
                std::cout << ar4;
                cout << endl;

                Atractii<Muzeu> ar2(m1);
                ar2.setLocatie("Bucuresti");
                ar2.setRatingAtr(8.9);
                std::cout << ar2;
                cout << endl;

                Atractii<Muzeu> ar5(m2);
                ar5.setLocatie("Bucuresti");
                ar5.setRatingAtr(8.6);
                std::cout << ar5;
                cout << endl;

                Atractii<Muzeu> ar6(m3);
                ar6.setLocatie("Bucuresti");
                ar6.setRatingAtr(9.3);
                std::cout << ar6;
                cout << endl;

                Atractii<Teatru> ar7(t1);
                ar7.setLocatie("Bucuresti");
                ar7.setRatingAtr(9.4);
                std::cout << ar7;
                cout << endl;

                Atractii<Teatru> ar8(t2);
                ar8.setLocatie("Bucuresti");
                ar8.setRatingAtr(8.9);
                std::cout << ar8;
                cout << endl;

                Atractii<Teatru> ar9(t3);
                ar9.setLocatie("Bucuresti");
                ar9.setRatingAtr(8.7);
                std::cout << ar9;
                cout << endl;

                break;
            }

            case 12: {
                Muzeu m1("Antipa", 16);
                Muzeu m2("Muzeul de Istorie", 20);
                Muzeu m3("Muzeul satului", 10);

                reducere_bilet(&m1);
                reducere_bilet(&m2);
                reducere_bilet(&m3);

                std::cout << m1;
                cout << endl;
                std::cout << m2;
                cout << endl;
                std::cout << m3;
                cout << endl;

                break;

            }

            case 13: {
                Teatru t1("Teatrul National Bucuresti", 50);
                Teatru t2("Teatrul de Comedie", 40);
                Teatru t3("Teatrul Tandarica", 30);

                reducere_bilet(&t1);
                reducere_bilet(&t2);
                reducere_bilet(&t3);

                std::cout << t1;
                cout << endl;
                std::cout << t2;
                cout << endl;
                std::cout << t3;
                cout << endl;

                break;

            }


            default: {
                cout << "Numar invalid." << endl;
                break;
            }

            case 0:
                quit = true;
        }
    } while (!quit);
    return 0;
}