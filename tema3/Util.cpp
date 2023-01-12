#include "Util.h"
#include "Camera.h"
#include "Angajat.h"
#include "Client.h"
#include "Person.h"
#include "Hotel.h"
#include <string>
#include <vector>
#include <map>
#include <memory>
#include <iostream>

IOStream::~IOStream() = default;

std::ostream &operator<<(std::ostream &os, const IOStream &obj) {
    obj.Print(os);
    return os;
}

NuExistaCamera::NuExistaCamera() = default;

const char *NuExistaCamera::what() const noexcept {
    return "Nu am gasit camera!";
}

void NuExistaCamera::Print(std::ostream &os) const {
    os << "Exception: Nu am gasit camera!";
}

NuExistaAngajat::NuExistaAngajat() = default;

const char *NuExistaAngajat::what() const noexcept {
    return "Nu am gasit niciun angajat cu acest post!";
}

void NuExistaAngajat::Print(std::ostream &os) const {
    os << "Exception: Nu am gasit niciun angajat cu acest post!";
}
//
//NuExistaPersoana::NuExistaPersoana() = default;
//
//const char *NuExistaPersoana::what() const noexcept {
//    return "Nu am gasit nicio persoana cu acest nume!";
//}
//
//void NuExistaPersoana::Print(std::ostream &os) const {
//    os << "Exception: Nu am gasit nicio persoana cu acest nume!";
//}
