#ifndef USER_H
#define USER_H

#include<string>
#include<QDate>

#include<QDebug>
#include<QDebug>

#include "workout.h"
#include "goal.h"
#include "characteristic.h"

class User
{
private:
    int uid;
    std::string name;
    QDate birthday;
    bool gender;//0: female, 1: male


public:
    QVector<Workout> workouts;
    QVector<Goal> goals;
    QVector<Characteristic> characteristics;

    User();
    User(int, std::string, QDate, bool);
    int getUid() const;
    void setUid(int value);
    std::string getName() const;
    void setName(const std::string &value);
    QDate getBirthday() const;
    void setBirthday(const QDate &value);
    bool getGender() const;
    void setGender(bool value);
};

#endif // USER_H
