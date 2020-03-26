#include "weightloss.h"



float WeightLoss::getTargetWeight() const
{
    return targetWeight;
}

void WeightLoss::setTargetWeight(float value)
{
    targetWeight = value;
}

WeightLoss::WeightLoss()
{
    
}

WeightLoss::WeightLoss(int gid, QDate deadline, QString motivation, float targetWeight)
    :Goal(gid, deadline, motivation), targetWeight(targetWeight)
{
    setJo(toJson());
}

QJsonObject WeightLoss::toJson(){
    QJsonObject res;
    res.insert("gid", getGid());
    res.insert("deadline", getDeadline().toString("dd.MM.yyyy"));
    res.insert("motivation", getMotivation());
    res.insert("targetWeight", targetWeight);
    return res;
}
