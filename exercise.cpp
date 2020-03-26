#include "exercise.h"

int Exercise::getEid() const
{
    return eid;
}

void Exercise::setEid(int value)
{
    eid = value;
}

BodyPart Exercise::getBodyPart() const
{
    return bodyPart;
}

void Exercise::setBodyPart(const BodyPart &value)
{
    bodyPart = value;
}

float Exercise::getCaloriesBurned() const
{
    return caloriesBurned;
}

void Exercise::setCaloriesBurned(float value)
{
    caloriesBurned = value;
}

QJsonObject Exercise::getJo() const
{
    return jo;
}

void Exercise::setJo(const QJsonObject &value)
{
    jo = value;
}

Exercise::Exercise()
{
    
}

Exercise::Exercise(int eid, BodyPart bodyPart, float caloriesBurned):eid(eid), bodyPart(bodyPart), caloriesBurned(caloriesBurned)
{
    qDebug() << "X:" << eid << " ; " << caloriesBurned;
}

QJsonObject Exercise::toJson()
{
    return QJsonObject();
}
