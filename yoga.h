#ifndef YOGA_H
#define YOGA_H

#include "exercise.h"
#include "position.h"

class Yoga : Exercise
{
private:
    Position pose;
    float duration;

public:
    Yoga();
};

#endif // YOGA_H
