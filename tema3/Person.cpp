#include "Person.h"
#include<iostream>

Person::Person() {};

Person::Person(string name_, string prenume_) {
    name = name_;
    prenume = prenume_;
}

Person::~Person() {
}

Person &Person::operator=(const Person &rhs) {
    if (this != &rhs) {
        name = rhs.name;
        prenume = rhs.prenume;
    }

    return *this;
}

string Person::getName() const {
    return name;
}

string Person::getPrenume() const {
    return prenume;
}

void Person::setName(string name_) {
    name = name_;
}

void Person::setPrenume(string prenume_) {
    prenume = prenume_;
}

void Person::citirePerson() {
    string nu;
    string pr;
    cout << "Nume de familie:" << endl;
    cin >> nu;
    cout << "Prenume:" << endl;
    cin >> pr;
    name = nu;
    prenume = pr;
}

void Person::afisarePerson() const {
    cout << "Nume de familie: ";
    cout << name;
    cout << endl;
    cout << "Prenume: ";
    cout << prenume;
}
