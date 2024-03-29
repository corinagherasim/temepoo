#ifndef TEMA2_ANGAJAT_H
#define TEMA2_ANGAJAT_H

#include "Person.h"
#include "GeneratID.h"
#include<string>

using namespace std;

class Angajat : public Person {
    string post;
protected:
    int id;
public:
    Angajat();

    Angajat(string name_, string prenume_, string post_);

    virtual ~Angajat();

    Angajat &operator=(const Angajat &rhs);

    string getPost() const;

    void setPost(string post_);

    PersonType GetPersonType() const override;

    void citireAngajat();

    void afisarePerson() const override;
};

#endif //TEMA2_ANGAJAT_H
