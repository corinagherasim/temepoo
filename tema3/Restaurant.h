#ifndef TEMA2_RESTAURANT_H
#define TEMA2_RESTAURANT_H

#include "Util.h"
#include<iostream>
#include <string>
#include <vector>
#include <map>
#include <memory>


class Restaurant : public IOStream {
    std::string numerestaurant;
    std::string specific;

public:
    ~Restaurant() override;

    Restaurant(const string &numerestaurant = "", const string &specific = "");

    const string &getNumerestaurant() const;

    void setNumerestaurant(const string &numerestaurant);

    const string &getSpecific() const;

    void setSpecific(const string &specific);

    void Print(std::ostream &os) const override;

};


#endif //TEMA2_RESTAURANT_H
