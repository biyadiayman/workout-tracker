#ifndef BUILDMUSCLE_H
#define BUILDMUSCLE_H

#include "goal.h"
#include "bodypart.h"
#include <QString>
#include <QDate>
#include <QJsonObject>

class BuildMuscle : public Goal
{
private:
    BodyPart bodyPart;
public:
    BuildMuscle();
    BuildMuscle(int, QDate, QString, BodyPart);
    BodyPart getBodyPart() const;
    void setBodyPart(const BodyPart &value);
    QJsonObject toJson() override;
};

#endif // BUILDMUSCLE_H
