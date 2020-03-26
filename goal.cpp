#include "goal.h"

QDate Goal::getDeadline() const
{
    return deadline;
}

void Goal::setDeadline(const QDate &value)
{
    deadline = value;
}


QJsonObject Goal::toJson()
{
    return QJsonObject();
}

int Goal::getGid() const
{
    return gid;
}

void Goal::setGid(int value)
{
    gid = value;
}

QJsonObject Goal::getJo() const
{
    return jo;
}

void Goal::setJo(const QJsonObject &value)
{
    jo = value;
}

QString Goal::getMotivation() const
{
    return motivation;
}

void Goal::setMotivation(const QString &value)
{
    motivation = value;
}

Goal::Goal()
{

}

Goal::Goal(int gid, QDate deadline, QString motivation):gid(gid), deadline(deadline), motivation(motivation)
{

}
