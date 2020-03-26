#include "stressrelief.h"

float StressRelief::getFreeTime() const
{
    return freeTime;
}

void StressRelief::setFreeTime(float value)
{
    freeTime = value;
}

StressRelief::StressRelief()
{

}

StressRelief::StressRelief(int gid, QDate deadline, QString motivation, float freeTime)
    :Goal(gid, deadline, motivation), freeTime(freeTime)
{
    setJo(toJson());
}

QJsonObject StressRelief::toJson(){
    QJsonObject res;
    res.insert("gid", getGid());
    res.insert("deadline", getDeadline().toString("dd.MM.yyyy"));
    res.insert("motivation", getMotivation());
    res.insert("freeTime", freeTime);
    return res;
}
