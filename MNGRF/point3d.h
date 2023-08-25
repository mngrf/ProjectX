#ifndef POINT3D_H
#define POINT3D_H

class Point3D {
public:
    float X, Y, Z;

    Point3D(float x, float y, float z) : X(x), Y(y), Z(z) {};

    ~Point3D();

    float Blurp();
};

#endif // POINT3D_H
