#include "Muzeu.h"

void Muzeu::Print(std::ostream &os) const {
    os << "Nume muzeu: " << numemuzeu << "\n";
    os << "Pret bilet: " << pretbilet << "\n";
}

const string &Muzeu::getNumemuzeu() const {
    return numemuzeu;
}

void Muzeu::setNumemuzeu(const string &numemuzeu) {
    Muzeu::numemuzeu = numemuzeu;
}

int Muzeu::getPretbilet() const {
    return pretbilet;
}

void Muzeu::setPretbilet(float pretbilet) {
    Muzeu::pretbilet = pretbilet;
}

Muzeu::Muzeu(const string &numemuzeu, float pretbilet) : numemuzeu(numemuzeu), pretbilet(pretbilet) {}

Muzeu::~Muzeu() {

}