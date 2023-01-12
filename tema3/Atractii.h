#ifndef TEMA2_ATRACTII_H
#define TEMA2_ATRACTII_H

#include<iostream>
#include <string>
#include <vector>
#include <map>
#include <memory>
#include "Util.h"

template<class T>
class Atractii : public IOStream {
    float rating_atr;
    std::string locatie;
    T atr;

public:

    Atractii(float rating = 1, std::string loc = "") : atr(nullptr) {
        rating_atr = rating;
        locatie = loc;
    }

    void Print(std::ostream &os) const override {
        atr.Print(os);
        os << "Rating: " << rating_atr << "\n";
        os << "Locatie: " << locatie << "\n";
    }

    int getRatingAtr() const;

    void setRatingAtr(int ratingAtr) {
        rating_atr = ratingAtr;
    }

    const string &getLocatie() const;

    void setLocatie(const string &locatie);
};


#endif //TEMA2_ATRACTII_H
