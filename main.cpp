#include <iostream>
#include <cstring>

using namespace std;

class Camera {
    char tip[30];
    int pret;
public:
    Camera() {};

    ///constructor de initializare
    Camera(char tip_[30], int pret_) {
        strcpy(tip, tip_);
        pret = pret_;
    }

    Camera(const Camera *camera) {
        strcpy(tip, camera->tip);
        pret = camera->pret;
    };

    ///destructor (folosim virtual pt ca se apela odata cu destructorul de la Hotel)
    virtual ~Camera() {
    }

    const char *getTip() const {
        return tip;
    }

    void setTip(char tip_[30]) {
        strcpy(tip, tip_);
    }

    int getPret() const {
        return pret;
    }

    void setPret(int pret) {
        Camera::pret = pret;
    }

    void citire() {
        char t[30];
        int p;
        cin >> t >> p;
        strcpy(tip, t);
        pret = p;
    }

    void afisareCamera() {
        cout << "Tip camera:" << tip << endl;
        cout << "Tarif:" << pret << ' ' << "lei/noapte" << endl;
    }

};

class Hotel {
    char nume[30];
    float rating = 0;
    int camere_disponibile = 0;
    Camera *camera = new Camera[20];

public:
    ///constructor de initializare
    Hotel(char nume_[30], float rating_) {
        strcpy(nume, nume_);
        rating = rating_;
    }

    ///constructor de copiere
    Hotel(const Hotel &hotel) {
        strcpy(nume, hotel.nume);
        rating = hotel.rating;
        camere_disponibile = hotel.camere_disponibile;
    };

    Hotel() {
        nume[0] = 0;
    };

    bool checkEmpty() {
        if (rating == 0 && camere_disponibile == 0 && strlen(nume) == 0) {
            return true;
        }
        return false;
    }

    char const *getNume() const {
        return nume;
    }

    void setNume(char nume_[30]) {
        strcpy(nume, nume_);
    }

    float getRating() const {
        return rating;
    }

    void setRating(float ratingHotel) {
        rating = ratingHotel;
    }

    int getCamereDisponibile() const {
        return camere_disponibile;
    }

    void setCamereDisponibile(int camereDisponibile) {
        camere_disponibile = camereDisponibile;
    }

    void afisare() {
        cout << nume << ' ' << rating << ' ' << camere_disponibile;
    }

    Camera *getCamera() const{
        return camera;
    };

    void setCamera(Camera *camera) {
        this->camera = camera;
    }

    void cautareCamera(char tip[]) {
        int nr = 0;
        cout << "Camerele cautate sunt:" << endl;
        for (int i = 0; i < getCamereDisponibile(); i++)
            if (strcmp(tip, camera[i].getTip()) == 0) {
                cout << "Tip camera:" << camera[i].getTip() << endl;
                cout << "Tarif:" << camera[i].getPret() << "lei/noapte" << endl;
                nr++;
            }
        cout << "Numarul camerelor cautate este:" << nr << endl;
    }


    ///destructor pt fiecare obiect Hotel creat
    ~Hotel() {
        cout << endl << strcat(nume, " a apelat destructor") << endl;
    }

    ///facem functiile prietene pt a face supraincarcarea operatorilor << si >>
    friend ostream &operator<<(ostream &out, const Hotel &hotel);

    friend ostream &operator<<(ostream &out, const Hotel *hotel);

    friend istream &operator>>(istream &in, Hotel &hotel);

    ///folosim operatorul == pentru a vedea daca sunt la fel 2 obiecte
    bool operator==(const Hotel &rhs) const {
        return strcmp(nume, rhs.nume) == 0 &&
               rating == rhs.rating &&
               camere_disponibile == rhs.camere_disponibile;
    }

    ///folosim operatorul += pentru a adauga obiecte in clasa
    void operator+=(Camera *camera_) {
        camere_disponibile++;
        Camera* c = new Camera(camera_);
        camera[camere_disponibile - 1] = c;
    }


};

///supraincarcarea operatorilor << si >>
ostream &operator<<(ostream &out, const Hotel &hotel) {
    out << "Numele hotelului: " << hotel.nume << endl;
    out << "Rating-ul hotelului: " << hotel.rating << endl;
    out << "Numarul camerelor disponibile: " << hotel.camere_disponibile << endl;
    for (int i = 0; i < hotel.camere_disponibile; i++) {
        cout << "Tip camera: " << hotel.camera[i].getTip() << endl;
        cout << "Tarif: " << hotel.camera[i].getPret() << " lei/noapte" << endl;
    }
    return out;
}

ostream &operator<<(ostream &out, const Hotel*hotel) {
    out << "Numele hotelului: " << hotel->getNume() << endl;
    out << "Rating-ul hotelului: " << hotel->getRating() << endl;
    out << "Numarul camerelor disponibile: " << hotel->getCamereDisponibile() << endl;
    Camera* c = hotel->getCamera();
    for (int i = 0; i < hotel->getCamereDisponibile(); i++) {
        out << "Tip camera: " << c[i].getTip() << endl;
        out << "Tarif: " << c[i].getPret() << " lei/noapte" << endl;
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

Camera* citesteCameraNoua() {
    char t[30];
    int p;
    cin >> t >> p;
    return new Camera(t, p);
}
int main() {
    Hotel **hoteluri = new Hotel*[20];
    int numarHoteluri = 1;

    char numeHotel1[30] = "Hilton";
    char cameraSingle[30] = "Single";
    char cameraDouble[30] = "Double";
    char cameraTriple[30] = "Triple";
    char cameraApartament[30] = "Apartament";

    Hotel hotel1(numeHotel1, 9.1);
    hotel1 += new Camera(cameraSingle, 200);
    hotel1 += new Camera(cameraDouble, 350);
    hotel1 += new Camera(cameraSingle, 200);
    hotel1 += new Camera(cameraTriple, 400);
    hotel1 += new Camera(cameraApartament, 500);
    hoteluri[0] = &hotel1;
    numarHoteluri++;

    char numeHotel2[30] = "Ramada";
    Hotel hotel2(numeHotel2, 8.8);
    hotel2 += new Camera(cameraSingle, 170);
    hotel2 += new Camera(cameraDouble, 280);
    hotel2 += new Camera(cameraSingle, 170);
    hotel2 += new Camera(cameraApartament, 450);
    hoteluri[1] = &hotel2;
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
                int n;
                cin >> hotelNou;
                cout << "Numarul de camere disponibile este:";
                cin >> n;
                cout << endl;
                cout << "Aceste camere(tip Single/Double/Triple/Apartament pret) sunt:";
                for (int j = 0; j < n; j++) {
                    hotelNou += citesteCameraNoua();
                }
                Hotel* h = new Hotel(hotelNou);
                h->setCamera(hotelNou.getCamera());
                hoteluri[numarHoteluri - 1] = h;
                cout << hotelNou;
                numarHoteluri++;
                break;
            }

            case 3: {
                char h[30];
                int nr = 0;
                cout << "In ce hotel vreti sa adaugati camere?" << endl;
                cin >> h;
                for (int i = 0; i < numarHoteluri - 1; ++i) {
                    if (strcmp(h, hoteluri[i]->getNume()) == 0) {
                        nr++;
                        int m;
                        cout << "Numarul de camere care vreti sa fie adaugate este:";
                        cin >> m;
                        cout << endl;
                        cout << "Aceste camere(tip Single/Double/Triple/Apartament pret) sunt:";
                        for (int j = 0; j < m; j++) {
                            hoteluri[i]->setCamereDisponibile(hoteluri[i]->getCamereDisponibile() + 1);
                            Camera* arrayCamere = hoteluri[i]->getCamera();
                            arrayCamere[hoteluri[i]->getCamereDisponibile() - 1] = citesteCameraNoua();
                            hoteluri[i]->setCamera(arrayCamere);
                        }
                        cout << hoteluri[i];
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
                    if (strcmp(k, hoteluri[i]->getNume()) == 0) {
                        cout << hoteluri[i];
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
                    if (strcmp(h, hoteluri[i]->getNume()) == 0) {
                        hoteluri[i]->cautareCamera(c);
                        nr++;
                    }
                }
                if (nr == 0)
                    cout << "Nu am gasit acest hotel." << endl;
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