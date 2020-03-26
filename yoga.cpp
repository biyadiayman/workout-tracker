#include "yoga.h"

Position Yoga::getPose() const
{
    return pose;
}

void Yoga::setPose(const Position &value)
{
    pose = value;
}

float Yoga::getDuration() const
{
    return duration;
}

void Yoga::setDuration(float value)
{
    duration = value;
}

Yoga::Yoga()
{
    
}

Yoga::Yoga(int eid, BodyPart bodyPart, float caloriesBurned, Position pose, float duration)
    :Exercise(eid, bodyPart, caloriesBurned), pose(pose), duration(duration)
{
    setJo(toJson());
}

QJsonObject Yoga::toJson(){
    QJsonObject res;
    res.insert("eid", getEid());
    res.insert("bodyPart", static_cast<int>(getBodyPart()));
    res.insert("caloriesBurned", getCaloriesBurned());
    res.insert("pose", static_cast<int>(pose));
    res.insert("duration", duration);
    return res;
}
