#ifndef STRESSRELIEF_H
#define STRESSRELIEF_H

#include "goal.h"
#include <QDate>
#include <QString>
#include <QJsonObject>

class StressRelief : public Goal
{
private:
    float freeTime;
public:
    StressRelief();
    StressRelief(int, QDate, QString, float);
    float getFreeTime() const;
    void setFreeTime(float value);
    QJsonObject toJson() override;
};

#endif // STRESSRELIEF_H
