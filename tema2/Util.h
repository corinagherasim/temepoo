#ifndef TEMA2_UTIL_H
#define TEMA2_UTIL_H
#include "Camera.h"
#include "Angajat.h"
#include "Client.h"
#include "Person.h"
#include "Hotel.h"
#include "ListaPersoane.h"
#include <string>
#include <vector>
#include <map>
#include <memory>

using namespace std;

class IOStream {
protected:
    virtual void Print(std::ostream& os) const = 0;
    virtual ~IOStream();

    friend std::ostream& operator<<(std::ostream& os, const IOStream& obj);
};

class NuExistaCamera : public std::exception, public IOStream{
public:
    NuExistaCamera();

    const char* what() const noexcept override;

    void Print(std::ostream &os) const override;
};

class NuExistaAngajat : public std::exception, public IOStream{
public:
    NuExistaAngajat();

    const char* what() const noexcept override;

    void Print(std::ostream &os) const override;
};

class NuExistaPersoana : public std::exception, public IOStream{
public:
    NuExistaPersoana();

    const char* what() const noexcept override;

    void Print(std::ostream &os) const override;
};





#endif //TEMA2_UTIL_H
