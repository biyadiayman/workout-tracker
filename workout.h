#ifndef WORKOUT_H
#define WORKOUT_H

#include <QDate>
#include <QJsonObject>

class Workout
{
private:
    int wid;
    QDate date;
    float calloriesBurned;

public:
    Workout();
    QJsonObject toJson();
};

#endif // WORKOUT_H
