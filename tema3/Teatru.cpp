#include "Teatru.h"

void Teatru::Print(std::ostream &os) const {
    os << "Nume teatru: " << numeteatru << "\n";
    os << "Pret bilet: " << pretbilet << "\n";
}

const string &Teatru::getNumeteatru() const {
    return numeteatru;
}

void Teatru::setNumeteatru(const string &numeteatru) {
    Teatru::numeteatru = numeteatru;
}

int Teatru::getPretbilet() const {
    return pretbilet;
}

void Teatru::setPretbilet(float pretbilet) {
    Teatru::pretbilet = pretbilet;
}

Teatru::Teatru(const string &numeteatru, float pretbilet) : numeteatru(numeteatru), pretbilet(pretbilet) {}

Teatru::~Teatru() {

}
