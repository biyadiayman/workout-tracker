#include "walking.h"

int Walking::getSteps() const
{
    return steps;
}

void Walking::setSteps(int value)
{
    steps = value;
}

Walking::Walking()
{

}

Walking::Walking(int eid, BodyPart bodyPart, float caloriesBurned, int steps)
    :Exercise(eid, bodyPart, caloriesBurned), steps(steps)
{

}
