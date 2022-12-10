#ifndef TEMA2_LISTAPERSOANE_H
#define TEMA2_LISTAPERSOANE_H
#include "Person.h"
#include "Angajat.h"
#include "Client.h"
#include "Camera.h"
#include "Hotel.h"
#include "Util.h"
#include <string>
#include <vector>
#include <map>
#include <memory>

using namespace std;


class ListaPersoane {
    static std::vector<std::shared_ptr<Person>> persoane;

public:
    ListaPersoane() = delete;

    static void adaugaPersoana(std::shared_ptr<Person> persoana);

    static std::shared_ptr<Person> cautaPersoana(const std::string &prenume);

    static std::vector<std::shared_ptr<Angajat>> getAngajati();

    static std::vector<std::shared_ptr<Client>> getClienti();
};



#endif //TEMA2_LISTAPERSOANE_H
