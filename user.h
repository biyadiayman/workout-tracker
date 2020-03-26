#ifndef USER_H
#define USER_H

#include<string>
#include<QDate>

#include<QDebug>
#include<QJsonObject>
#include<QJsonArray>
#include<QString>

#include "workout.h"
#include "goal.h"
#include "characteristic.h"

class User
{
private:
    int uid;
    QString name;
    QDate birthday;
    bool gender;//0: female, 1: male

    QVector<Workout> workouts;
    QVector<Goal> goals;
    QVector<Characteristic> characteristics;

public:

    User();
    User(int,QString, QDate, bool);
    int getUid() const;
    void setUid(int value);
    QDate getBirthday() const;
    void setBirthday(const QDate &value);
    bool getGender() const;
    void setGender(bool value);
    QVector<Workout> getWorkouts() const;
    void setWorkouts(const QVector<Workout> &value);
    QVector<Goal> getGoals() const;
    void setGoals(const QVector<Goal> &value);
    QVector<Characteristic> getCharacteristics() const;
    void setCharacteristics(const QVector<Characteristic> &value);
    QJsonObject toJson();
    QString getName() const;
    void setName(const QString &value);
    void addWorkout(Workout w);
    void addCharacteristic(Characteristic c);
    void addGoal(Goal g);
};

#endif // USER_H
