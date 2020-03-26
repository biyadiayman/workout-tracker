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

QJsonObject Walking::toJson(){
    QJsonObject res;
    res.insert("eid", getEid());
    res.insert("bodyPart", static_cast<int>(getBodyPart()));
    res.insert("caloriesBurned", static_cast<double>(getCaloriesBurned()));
    res.insert("steps", steps);
    return res;
}
