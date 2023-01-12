#ifndef TEMA2_MUZEU_H
#define TEMA2_MUZEU_H

#include "Util.h"
#include<iostream>
#include <string>
#include <vector>
#include <map>
#include <memory>

class Muzeu : public IOStream {
    std::string numemuzeu;
    float pretbilet;

public:

    Muzeu(const string &numemuzeu = "", float pretbilet = 0);

    ~Muzeu() override;

    const string &getNumemuzeu() const;

    void setNumemuzeu(const string &numemuzeu);

    int getPretbilet() const;

    void setPretbilet(float pretbilet);

    void Print(std::ostream &os) const override;
};


#endif //TEMA2_MUZEU_H
