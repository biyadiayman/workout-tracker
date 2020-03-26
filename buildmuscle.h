#ifndef BUILDMUSCLE_H
#define BUILDMUSCLE_H

#include "goal.h"
#include "bodypart.h"

class BuildMuscle : public Goal
{
private:
    BodyPart bodyPart;
public:
    BuildMuscle();
    BodyPart getBodyPart() const;
    void setBodyPart(const BodyPart &value);
};

#endif // BUILDMUSCLE_H
