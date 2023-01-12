#include "Angajat.h"
#include<iostream>

Angajat::Angajat() {
    this->id = GeneratID::getInstance()->generatID();
};

Angajat::Angajat(string name_, string prenume_, string post_) : Person(name_, prenume_) {
    this->id = GeneratID::getInstance()->generatID();
    post = post_;
}

Angajat::~Angajat() {
}

Angajat &Angajat::operator=(const Angajat &rhs) {
    if (this != &rhs) {
        Person::operator=(rhs);
        post = rhs.post;
    }

    return *this;
}

string Angajat::getPost() const {
    return post;
}

void Angajat::setPost(string post_) {
    post = post_;
}

PersonType Angajat::GetPersonType() const {
    return PersonType::Angajat;
}

void Angajat::citireAngajat() {
    citirePerson();
    string po;
    cout << "Post (termenul la masculin, exemplu: receptionist/camerist/manager): " << endl;
    cin >> po;
    post = po;
}

void Angajat::afisarePerson() const {
    cout << "ID:";
    cout << id;
    cout << endl;
    cout << "Nume de familie: ";
    cout << name;
    cout << endl;
    cout << "Prenume: ";
    cout << prenume;
    cout << endl;
    cout << "Post: ";
    cout << post;
    cout << endl;
}
