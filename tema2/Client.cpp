#include "Client.h"
#include<iostream>

Client::Client() {};

Client::Client(string name_, string prenume_, string tara_) :  Person(name_, prenume_){
    tara = tara_;
}

Client::~Client() {
}

Client& Client::operator=(const Client& rhs) {
    if (this != &rhs) {
        Person::operator=(rhs);
        tara = rhs.tara;
    }

    return *this;
}

string Client::getTara() const {
    return tara;
}

void Client::setTara(string tara_) {
    tara = tara_;
}

PersonType Client::GetPersonType() const {
    return PersonType::Client;
}

void Client::citireClient(){
    citirePerson();
    string tr;
    cout << "Tara de provenienta:";
    cin >> tr;
    tara = tr;
}
