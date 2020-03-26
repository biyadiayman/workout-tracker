#include "characteristic.h"

int Characteristic::getCid() const
{
    return cid;
}

void Characteristic::setCid(int value)
{
    cid = value;
}

int Characteristic::getHeight() const
{
    return height;
}

void Characteristic::setHeight(int value)
{
    height = value;
}

float Characteristic::getWeight() const
{
    return weight;
}

void Characteristic::setWeight(float value)
{
    weight = value;
}

QDate Characteristic::getDate() const
{
    return date;
}

void Characteristic::setDate(const QDate &value)
{
    date = value;
}

QJsonObject Characteristic::toJson()
{
    QJsonObject res;
    res.insert("cid", cid);
    res.insert("height", height);
    res.insert("weight", weight);
    res.insert("date", date.toString("dd.MM.yyyy"));
    return res;
}

Characteristic::Characteristic()
{

}

Characteristic::Characteristic(int cid, int height, float weight, QDate date)
    :cid(cid), height(height), weight(weight), date(date)
{

}
