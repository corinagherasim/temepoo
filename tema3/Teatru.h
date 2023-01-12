#ifndef TEMA2_TEATRU_H
#define TEMA2_TEATRU_H

#include "Util.h"
#include<iostream>
#include <string>
#include <vector>
#include <map>
#include <memory>

class Teatru : public IOStream {
    std::string numeteatru;
    float pretbilet;

public:
    Teatru(const string &numeteatru = "", float pretbilet = 0);

    ~Teatru() override;

    const string &getNumeteatru() const;

    void setNumeteatru(const string &numeteatru);

    int getPretbilet() const;

    void setPretbilet(float pretbilet);

    void Print(std::ostream &os) const override;
};


#endif //TEMA2_TEATRU_H
