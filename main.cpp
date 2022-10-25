#include <iostream>
#include <cstring>

using namespace std;

class Camera {
    char tip[30];
    int pret;
public:
    Camera(){};
    ///constructor de initializare
    Camera(char *tip_, int pret_) {
        strcpy(tip, tip_);
        pret = pret_;
    }
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

    void citire(){
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
    float rating;
    int camere_disponibile = 0;
    Camera camera[30];

public:
    ///constructor de initializare
    Hotel(char *nume_, float rating_) {
        strcpy(nume, nume_);
        rating = rating_;
    }
    ///constructor de copiere
    Hotel(const Hotel &hotel) {
        strcpy(nume, hotel.nume);
        rating = hotel.rating;
        camere_disponibile = hotel.camere_disponibile;
    };

    Hotel() {};

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

    void cautareCamera(char tip[]){
        int nr=0;
        cout << "Camerele cautate sunt:" << endl;
        for(int i=0; i<getCamereDisponibile(); i++)
            if(strcmp(tip, camera[i].getTip())==0)
            {
                cout << "Tip camera:" <<camera[i].getTip() << endl;
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

    friend istream &operator>>(istream &in, Hotel &hotel);

    ///folosim operatorul == pentru a vedea daca sunt la fel 2 obiecte
    bool operator==(const Hotel &rhs) const {
        return nume == rhs.nume &&
               rating == rhs.rating &&
               camere_disponibile == rhs.camere_disponibile;
    }
    ///folosim operatorul += pentru a adauga obiecte in clasa
    void operator+=(Camera camera_) {
        camere_disponibile++;
        camera[camere_disponibile - 1] = camera_;
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

istream &operator>>(istream &in, Hotel &hotel) {
    cout << endl << "Numele hotelului: ";
    in >> hotel.nume;
    cout << endl << "Rating-ul hotelului: ";
    in >> hotel.rating;
    return in;
}

int main() {
    Hotel hotel1("Hilton", 4.5);
    hotel1.afisare();
    Hotel hotel2(hotel1);
    hotel2+= Camera("Single", 100);
    hotel2+= Camera("Double", 200);
    cout << endl;
    cout << hotel2;
    cout << endl;
    hotel1.setNume("Intercontinental");
    cout << hotel1;

    if (hotel1 == hotel2) {
        cout << endl << "true" << endl;
    } else {
        cout << endl << "false" << endl;
    }

    Hotel hotel3;
    cin >> hotel3;
    hotel3+= Camera("Single", 150);
    hotel3+= Camera("Double", 250);
    cout << hotel3;


    Hotel hotel4;
    cin >> hotel4;
    int n;
    cout << "Numarul de camere disponibile este:";
    cin >> n;
    Camera a[n];
    cout << endl;
    cout << "Aceste camere sunt:";
    for (int i=0; i < n; i++) {
        a[i].citire();
        hotel4+=a[i];
    }
    cout << endl;
    cout << "Camerele disponibile sunt:" << endl;
    hotel4.getCamereDisponibile();
    cout << hotel4;

    hotel4.cautareCamera("Single");

    return 0;
}
