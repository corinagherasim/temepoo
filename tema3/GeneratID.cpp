#include "GeneratID.h"
#include<iostream>

int GeneratID::id = 0;

GeneratID *GeneratID::instance = nullptr;

GeneratID::GeneratID() {}

int GeneratID::generatID() {
    return id++;
}

GeneratID *GeneratID::getInstance() {
    if (instance == nullptr)
        instance = new GeneratID();
    return instance;
}



