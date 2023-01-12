#ifndef TEMA2_GENERATID_H
#define TEMA2_GENERATID_H


class GeneratID {
private:
    static int id;

    GeneratID();

    static GeneratID *instance;
public:

    static int generatID();

    static GeneratID *getInstance();

};


#endif //TEMA2_GENERATID_H
