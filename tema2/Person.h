#ifndef TEMA2_PERSON_H
#define TEMA2_PERSON_H
#include <string>

using namespace std;

enum class PersonType {
    Angajat,
    Client
};

class Person {
    string name;
    string prenume;
public:
    Person();

    Person(string name_, string prenume_);

    virtual ~Person();

    Person& operator=(const Person &rhs);

    string getName() const;

    string getPrenume() const;

    void setName(string nume_);

    void setPrenume(string prenume_);

    virtual PersonType GetPersonType() const = 0;

    void citirePerson();

    void afisarePerson();
};
#endif //TEMA2_PERSON_H
