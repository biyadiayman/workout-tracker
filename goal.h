#ifndef GOAL_H
#define GOAL_H

#include<QDate>
#include<QString>
#include<QJsonObject>

class Goal
{
private:
    int gid;
    QDate deadline;
    QString motivation;

    QJsonObject jo;

public:
    Goal();
    Goal(int, QDate, QString);
    QDate getDeadline() const;
    void setDeadline(const QDate &value);
    virtual QJsonObject toJson();
    int getGid() const;
    void setGid(int value);
    QJsonObject getJo() const;
    void setJo(const QJsonObject &value);
    QString getMotivation() const;
    void setMotivation(const QString &value);
};

#endif // GOAL_H
