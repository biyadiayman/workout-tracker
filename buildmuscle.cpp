#include "buildmuscle.h"

BodyPart BuildMuscle::getBodyPart() const
{
    return bodyPart;
}

void BuildMuscle::setBodyPart(const BodyPart &value)
{
    bodyPart = value;
}

BuildMuscle::BuildMuscle()
{

}

BuildMuscle::BuildMuscle(int gid, QDate deadline, QString motivation, BodyPart bodyPart)
    :Goal(gid, deadline, motivation), bodyPart(bodyPart)
{
    setJo(toJson());
}

QJsonObject BuildMuscle::toJson(){
    QJsonObject res;
    res.insert("gid", getGid());
    res.insert("deadline", getDeadline().toString("dd.MM.yyyy"));
    res.insert("motivation", getMotivation());
    res.insert("bodyPart", static_cast<int>(bodyPart));
    return res;
}
