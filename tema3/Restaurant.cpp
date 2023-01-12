#include "Restaurant.h"


void Restaurant::Print(std::ostream &os) const {
    os << "Nume restaurat: " << numerestaurant << "\n";
    os << "Specific: " << specific << "\n";

}

const string &Restaurant::getNumerestaurant() const {
    return numerestaurant;
}

void Restaurant::setNumerestaurant(const string &numerestaurant) {
    Restaurant::numerestaurant = numerestaurant;
}

const string &Restaurant::getSpecific() const {
    return specific;
}

void Restaurant::setSpecific(const string &specific) {
    Restaurant::specific = specific;
}

Restaurant::Restaurant(const string &numerestaurant, const string &specific) : numerestaurant(numerestaurant),
                                                                               specific(specific) {}

Restaurant::~Restaurant() {

}
