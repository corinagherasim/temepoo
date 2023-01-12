#ifndef TEMA2_CAMERA_H
#define TEMA2_CAMERA_H
#include <string>

using namespace std;

class Camera {
    string tip = "";
    int pret = 0;
public:
    Camera();

    Camera(string tip_, int pret_);

    explicit Camera(const Camera *camera);

    virtual ~Camera();

    string getTip() const;

    void setTip(string tip_);

    int getPret() const;

    void setPret(int pret);

    void citireCamera();
};


#endif //TEMA2_CAMERA_H
