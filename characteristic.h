#ifndef CHARACTERISTIC_H
#define CHARACTERISTIC_H

#include<QDate>

class Characteristic
{
private:
    int cid;
    int height; // height in cm
    float weight;
    QDate date;// Date updated

public:
    Characteristic();
};

#endif // CHARACTERISTIC_H
