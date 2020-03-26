#ifndef WALKING_H
#define WALKING_H

#include "exercise.h"
#include <QJsonObject>
class Walking : public Exercise
{
private:
    int steps;

public:

    Walking();
    Walking(int, BodyPart, float, int);
    int getSteps() const;
    void setSteps(int value);
    QJsonObject toJson() override;
};

#endif // WALKING_H
