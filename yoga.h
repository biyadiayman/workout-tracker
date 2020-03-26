#ifndef YOGA_H
#define YOGA_H

#include "exercise.h"
#include "position.h"
#include <QJsonObject>

class Yoga : public Exercise
{
private:
    Position pose;
    float duration;

public:

    Yoga();
    Yoga(int, BodyPart, float, Position, float);
    QJsonObject toJson() override;

    Position getPose() const;
    void setPose(const Position &value);
    float getDuration() const;
    void setDuration(float value);
};

#endif // YOGA_H
