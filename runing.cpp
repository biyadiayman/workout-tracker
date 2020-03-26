#include "runing.h"

float Runing::getDistance() const
{
    return distance;
}

void Runing::setDistance(float value)
{
    distance = value;
}

float Runing::getDuration() const
{
    return duration;
}

void Runing::setDuration(float value)
{
    duration = value;
}

Runing::Runing()
{
    
}

Runing::Runing(int eid, BodyPart bodyPart, float caloriesBurned, float distance, float duration)
    :Exercise(eid, bodyPart, caloriesBurned), distance(distance), duration(duration)
{

}

QJsonObject Runing::toJson(){

    QJsonObject res;
    res.insert("eid", getEid());
    res.insert("bodyPart", static_cast<int>(getBodyPart()));
    res.insert("caloriesBurned", getCaloriesBurned());
    res.insert("distance", distance);
    res.insert("duration", duration);
    return res;
}
