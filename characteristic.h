#ifndef CHARACTERISTIC_H
#define CHARACTERISTIC_H

#include<QDate>
#include<QJsonObject>

class Characteristic
{
private:
    int cid;
    int height; // height in cm
    float weight;
    QDate date;// Date updated

public:
    Characteristic();
    Characteristic(int, int, float, QDate);
    int getCid() const;
    void setCid(int value);
    int getHeight() const;
    void setHeight(int value);
    float getWeight() const;
    void setWeight(float value);
    QDate getDate() const;
    void setDate(const QDate &value);
    QJsonObject toJson();
};

#endif // CHARACTERISTIC_H
