#include "ListaPersoane.h"
#include "Person.h"
#include "Angajat.h"
#include "Client.h"
#include "Hotel.h"
#include "Util.h"
#include <string>
#include <vector>
#include <map>
#include <memory>
#include<iostream>

std::vector<std::shared_ptr<Person>> ListaPersoane::persoane;

void ListaPersoane::adaugaPersoana(std::shared_ptr<Person> persoana) {
    persoane.push_back(persoana);
}

std::shared_ptr<Person> ListaPersoane::cautaPersoana(const std::string &prenume) {
    int nr = 0;
    try {
        cout << "Persoanele cautate sunt: " << endl;
        for (auto &persoana: persoane) {
            if (persoana->getPrenume() == prenume) {
                nr++;
//                cout << "S-a gasit!" << endl;
                persoana->afisarePerson();
                cout << endl;
            }

//            return persoana;
        }
        if (nr == 0) {
            throw NuExistaPersoana();
        }
    }
    catch (const NuExistaPersoana &err) {
        std::cout << err << '\n';
    }
}

std::vector<std::shared_ptr<Angajat>> ListaPersoane::getAngajati() {
    std::vector<std::shared_ptr<Angajat>> ang;

    for (auto &persoana : persoane)
    {
        if (typeid(*persoana) == typeid(Angajat))
            ang.push_back(std::dynamic_pointer_cast<Angajat>(persoana));
    }

    return ang;
}

std::vector<std::shared_ptr<Client>> ListaPersoane::getClienti() {
    std::vector<std::shared_ptr<Client>> cli;

    for (auto &persoana : persoane)
    {
        if (typeid(*persoana) == typeid(Client))
            cli.push_back(std::dynamic_pointer_cast<Client>(persoana));
    }

    return cli;
}