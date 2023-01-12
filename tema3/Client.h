#ifndef TEMA2_CLIENT_H
#define TEMA2_CLIENT_H

#include "Person.h"
#include<string>

using namespace std;

class Client : public Person {
    string tara;
public:
    Client();

    Client(string name_, string prenume_, string tara_);

    virtual ~Client();

    Client &operator=(const Client &rhs);

    string getTara() const;

    void setTara(string tara_);

    PersonType GetPersonType() const override;

    void citireClient();

    void afisarePerson() const override;
};


#endif //TEMA2_CLIENT_H
