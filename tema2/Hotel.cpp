#include "Hotel.h"
#include "Util.h"
#include<iostream>

    ///constructor de initializare
    Hotel::Hotel(string nume_, float rating_) {
        nume = nume_;
        rating = rating_;
    }

    ///constructor de copiere
    Hotel::Hotel(const Hotel &hotel) {
        nume = hotel.nume;
        rating = hotel.rating;
        camere_disponibile = hotel.camere_disponibile;
        angajati = hotel.angajati;
    };

    Hotel::Hotel() {};

//    bool Hotel::checkEmpty() {
//        if (rating == 0 && camere_disponibile == 0 && std::string nume = 0) {
//            return true;
//        }
//        return false;
//}

     string Hotel::getNume() const {
        return nume;
    }
    void Hotel::setNume(string nume_) {
        nume = nume_;
    }

    float Hotel::getRating() const {
        return rating;
    }

    void Hotel::setRating(float ratingHotel) {
        rating = ratingHotel;
    }

    int Hotel::getCamereDisponibile() const {
        return camere_disponibile;
    }

    void Hotel::setCamereDisponibile(int camereDisponibile) {
        camere_disponibile = camereDisponibile;
    }

    int Hotel::getAngajati() const {
        return angajati;
    }

    void Hotel::setAngajati(int nrangajati) {
        angajati = nrangajati;
    }

    int Hotel::getClienti() const {
        return clienti;
    }

    void Hotel::setClienti(int nrclienti) {
        clienti = nrclienti;
    }
//
//Hotel::Camera *getCamera() const{
//        return camera;
//    };
//
//    void Hotel::setCamera(Camera *camera) {
//        this->camera = camera;
//    }
//
//    Camera *getAngajat() const{
//        return angajat;
//    };
//
//    void setAngajat(Angajat *angajat) {
//        this->angajat = angajat;
//    }
//
//    Camera *getClient() const{
//        return client;
//    };
//
//    void setClient(Client *client) {
//        this->client = client;
//    }

    void Hotel::cautareCamera(string tip) {
        int nr = 0;
        cout << "Camerele cautate sunt:" << endl;
        try {
            for (int i = 0; i < getCamereDisponibile(); i++)
                if (tip == camera[i].getTip()) {
                    cout << "Tip camera:" << camera[i].getTip() << endl;
                    cout << "Tarif:" << camera[i].getPret() << "lei/noapte" << endl;
                    nr++;
                }
            if (nr == 0)
                throw NuExistaCamera();
        }
        catch(const NuExistaCamera &err) {
            std::cout << err << '\n';
        }
        cout << "Numarul camerelor cautate este:" << nr << endl;
    }

    void Hotel::cautareCameraClient(string tip) {
        string rasp;
        int contor;
        int nr = 0;
        cout << "Camerele cautate sunt:" << endl;
        for (int i = 0; i < getCamereDisponibile(); i++)
            if (tip == camera[i].getTip()) {
                cout << "Tip camera:" << camera[i].getTip() << endl;
                cout << "Tarif:" << camera[i].getPret() << "lei/noapte" << endl;
                nr++;
            }
        cout << endl;
        for (int i = getCamereDisponibile() - 1; i >= 0; i--)
            if (tip == camera[i].getTip()) {
                contor++;
                cout << "Tip camera:" << camera[i].getTip() << endl;
                cout << "Tarif:" << camera[i].getPret() << "lei/noapte" << endl;
                cout << "Vreti sa rezervati aceasta camera?(da/nu)";
                cin >> rasp;
                if (rasp == "da"){
                    cout << "Ati rezervat aceasta camera." << endl;
                    for (int j = i; j < getCamereDisponibile() - 1; j++) {
                        camera[i] = camera[i + 1];
                    }
                    camere_disponibile--;
                    break;
                }
                else {
                    if (nr == contor)
                        cout << "Ne pare rau ca nu ati gasit ce cautati." << endl;
                    else
                        cout << "Puteti cauta alta camera." << endl;
                }

            }
    }

    void Hotel::cautareAngajat(string post){
        int nr = 0;
        cout << "Angajatii cautati sunt:" << endl;
        try {
            for (int i = 0; i < getAngajati(); i++)
                if (post == angajat[i].getPost()) {
                    cout << angajat[i].getName() << ' ' << angajat[i].getPrenume() << endl;
                    nr++;
                }
            if (nr == 0)
                throw NuExistaAngajat();
        }
        catch(const NuExistaAngajat &err) {
            std::cout << err << '\n';
        }
        cout << "Numarul angajatilor cautati este:" << nr << endl;
     }

    void Hotel::cautareAngajatDupaPrenume(string prenume){
        int nr = 0;
            for (int i = 0; i < getAngajati(); i++)
                if (prenume == angajat[i].getPrenume()) {
                    cout << angajat[i].getName() << ' ' << angajat[i].getPrenume() << ' ' << angajat[i].getPost() << ' ' << endl;
                    nr++;
                }
        cout << "Numarul angajatilor cautati este:" << nr << endl;
    }


    ///destructor pt fiecare obiect Hotel creat
    Hotel::~Hotel() {
        cout << endl << nume << " a apelat destructor" << endl;
    }

    ///folosim operatorul += pentru a adauga obiecte in clasa
    void Hotel::operator+=(Camera camera_) {
        camere_disponibile++;
        camera[camere_disponibile - 1] = camera_;
    }

    void Hotel::operator+=(Angajat angajat_) {
        angajati++;
        angajat[angajati - 1] = angajat_;
    }

    void Hotel::operator+=(Client client_) {
        clienti++;
        client[clienti - 1] = client_;
    }

ostream &operator<<(ostream &out, const Hotel &hotel) {
    out << "Numele hotelului: " << hotel.nume << endl;
    out << "Rating-ul hotelului: " << hotel.rating << endl;
    out << "Numarul camerelor disponibile: " << hotel.camere_disponibile << endl;
    for (int i = 0; i < hotel.camere_disponibile; i++) {
        cout << "Tip camera: " << hotel.camera[i].getTip() << endl;
        cout << "Tarif: " << hotel.camera[i].getPret() << " lei/noapte" << endl;
    }
    out << "Numarul total al angajatilor: " << hotel.angajati << endl;
    for (int i = 0; i < hotel.angajati; i++) {
        cout << "Numele angajatului: " << hotel.angajat[i].getName() << ' ' << hotel.angajat[i].getPrenume() << endl;
        cout << "Postul angajatului: " << hotel.angajat[i].getPost() << endl;
    }
    if (hotel.clienti != 0) {
        out << "Clienti: " << endl;
        for (int i = 0; i < hotel.clienti; i++) {
            cout << "Nume client: " << hotel.client[i].getName() << ' ' << hotel.client[i].getPrenume() << endl;
//            cout << "Tara clientului: " << hotel.client[i].getTara() << endl;
        }
    }
    return out;
}

istream &operator>>(istream &in, Hotel &hotel) {
    cout << endl << "Numele hotelului: ";
    in >> hotel.nume;
    cout << endl << "Rating-ul hotelului: ";
    in >> hotel.rating;
    return in;
}