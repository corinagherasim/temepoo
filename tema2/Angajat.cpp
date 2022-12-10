#include "Angajat.h"
#include<iostream>

Angajat::Angajat() {};

Angajat::Angajat(string name_, string prenume_, string post_) : Person(name_, prenume_){
    post = post_;
}

Angajat::~Angajat() {
}

Angajat& Angajat::operator=(const Angajat& rhs) {
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
void Angajat::citireAngajat(){
    citirePerson();
    string po;
    cout << "Post (termenul la masculin, exemplu: receptionist/camerist/manager): " << endl;
    cin >> po;
    post = po;
}
