#include<iostream>
#include <string>
#include <vector>
#include <map>
#include <memory>
#include "Util.h"
#include "Teatru.h"

template<class T>
class Atractii : public IOStream {
    float rating_atr;
    std::string locatie;
    T atr;

public:

    Atractii(T atr_, float rating = 1, std::string loc = "") {
        rating_atr = rating;
        locatie = loc;
        atr = atr_;
    }

    void Print(std::ostream &os) const override {
        atr.Print(os);
        os << "Rating: " << rating_atr << "\n";
        os << "Locatie: " << locatie << "\n";
    }

    int getRatingAtr() const {
        return rating_atr;
    }

    void setRatingAtr(float ratingAtr) {
        rating_atr = ratingAtr;
    }

    const string &getLocatie() const {
        return locatie;
    }

    void setLocatie(const string &locatie) {
        Atractii::locatie = locatie;
    }


};

template<class T>
void reducere_bilet(T *m) {
    m->setPretbilet(m->getPretbilet() / 2);
}

template<>
inline void reducere_bilet(Teatru *m) {
    m->setPretbilet(m->getPretbilet() / 4);
}


