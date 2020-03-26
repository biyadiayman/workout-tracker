#ifndef WEIGHTLOSS_H
#define WEIGHTLOSS_H

#include "goal.h"
#include<QJsonObject>
#include<QString>
#include<QDate>

class WeightLoss : public Goal
{
private:
    float targetWeight;

public:
    WeightLoss();
    WeightLoss(int, QDate, QString, float);
    float getTargetWeight() const;
    void setTargetWeight(float value);
    QJsonObject toJson() override;
};

#endif // WEIGHTLOSS_H
