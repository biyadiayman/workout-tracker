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
    res.insert("caloriesBurned", static_cast<double>(getCaloriesBurned()));
    res.insert("distance", static_cast<double>(distance));
    res.insert("duration", static_cast<double>(duration));
    return res;
}
