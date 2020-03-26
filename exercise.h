#ifndef EXERCISE_H
#define EXERCISE_H

#include "bodypart.h"

#include<QDebug>

class Exercise
{
private:
    int eid;
    BodyPart bodyPart;
    float caloriesBurned;
public:

    Exercise();
    Exercise(int, BodyPart, float);
    int getEid() const;
    void setEid(int value);
    BodyPart getBodyPart() const;
    void setBodyPart(const BodyPart &value);
    float getCaloriesBurned() const;
    void setCaloriesBurned(float value);
};

#endif // EXERCISE_H
