#include "Camera.h"
#include<iostream>

Camera::Camera() {};

Camera::Camera(string tip_, int pret_) {
    tip = tip_;
    pret = pret_;
}

Camera::Camera(const Camera *camera) {
    tip = camera->tip;
    pret = camera->pret;
};

Camera::~Camera() {
}

string Camera::getTip() const {
    return tip;
}

void Camera::setTip(string tip_) {
    tip = tip_;
}

int Camera::getPret() const {
    return pret;
}

void Camera::setPret(int pret_) {
    pret = pret_;
}

void Camera::citireCamera() {
    string t;
    int p;
    cin >> t >> p;
    tip = t;
    pret = p;
}
