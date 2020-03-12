#ifndef BUILDMUSCLE_H
#define BUILDMUSCLE_H

#include "goal.h"
#include "bodypart.h"

class BuildMuscle : Goal
{
private:
    BodyPart bodyPart;
public:
    BuildMuscle();
};

#endif // BUILDMUSCLE_H
