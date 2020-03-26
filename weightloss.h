#ifndef WEIGHTLOSS_H
#define WEIGHTLOSS_H

#include "goal.h"

class WeightLoss : public Goal
{
private:
    float targetWeight;

public:
    WeightLoss();
    float getTargetWeight() const;
    void setTargetWeight(float value);
};

#endif // WEIGHTLOSS_H
