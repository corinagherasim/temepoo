#ifndef TEMA2_HOTEL_H
#define TEMA2_HOTEL_H
#include "Camera.h"
#include "Angajat.h"
#include "Client.h"
#include "Person.h"
#include <string>
#include <vector>
#include <map>
#include <memory>

using namespace std;


class Hotel {
    string nume;
    float rating = 0;
    int camere_disponibile = 0;
    int angajati = 0;
    int clienti = 0;
    Camera camera[30];
    Angajat angajat[30];
    Client client[100];

public:
    ///constructor de initializare
    Hotel(string nume_, float rating_);

    ///constructor de copiere
    Hotel(const Hotel &hotel);

    Hotel();

//    bool checkEmpty();

    string getNume() const;

    void setNume(string nume_);

    float getRating() const;

    void setRating(float ratingHotel);

    int getCamereDisponibile() const;

    void setCamereDisponibile(int camereDisponibile);

    int getAngajati() const;

    void setAngajati(int nrangajati);

    int getClienti() const;

    void setClienti(int nrclienti);

//    Camera *getCamera() const;
//
//    void setCamera(Camera *camera);
//
//    Camera *getAngajat() const;
//
//    void setAngajat(Angajat *angajat);
//
//    Camera *getClient() const;
//
//    void setClient(Client *client);

    void cautareCamera(string tip);

//    void retinereClient();

    void cautareCameraClient(string tip);

    void cautareAngajat(string post);

    void cautareAngajatDupaPrenume(string prenume);

    ///destructor pt fiecare obiect Hotel creat
    ~Hotel();

    ///facem functiile prietene pt a face supraincarcarea operatorilor << si >>
    friend ostream &operator<<(ostream &out, const Hotel &hotel);

    friend istream &operator>>(istream &in, Hotel &hotel);

  ///folosim operatorul += pentru a adauga obiecte in clasa
    void operator+=(Camera camera_);

    void operator+=(Angajat angajat_);

    void operator+=(Client client_);
};


#endif //TEMA2_HOTEL_H
