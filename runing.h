#ifndef RUNING_H
#define RUNING_H

#include "exercise.h"
#include <QJsonObject>

class Runing : public Exercise
{
private:
    float distance;
    float duration;
public:
    Runing();
    Runing(int, BodyPart, float, float, float);
    QJsonObject toJson() override;

    float getDistance() const;
    void setDistance(float value);
    float getDuration() const;
    void setDuration(float value);
};

#endif // RUNING_H
